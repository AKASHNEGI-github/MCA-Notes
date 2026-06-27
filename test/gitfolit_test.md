---
title: GitFolio Render Test
description: A comprehensive test file covering every supported markdown feature.
---

# GitFolio Render Test

This document tests every rendering feature supported by GitFolio — alerts, tables, code tabs, syntax highlighting, task lists, and more.

---

## Alerts

> [!NOTE]
> This is a **note** alert. It supports inline `code`, **bold**, and _italic_ text inside.

> [!TIP]
> Use `npm run dev` to start the development server. Tip alerts are great for shortcuts and best practices.

> [!IMPORTANT]
> Always commit your `.env.example` file but **never** commit your actual `.env`. This is important for security.

> [!WARNING]
> Calling this API without authentication will hit the **60 requests/hour** rate limit very quickly.

> [!CAUTION]
> Running `DROP TABLE users;` is irreversible. Make sure you have a backup before proceeding.

---

## Code Tabs

The following example adds two integers using different approaches and languages. GitFolio groups consecutive fenced code blocks into a single tabbed interface, using the text inside `[]` as the tab title.

```cpp [Direct Addition]
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << a + b << endl;
    return 0;
}
```

```python [Python]
a = 10
b = 20

print(a + b)
```

```javascript [JavaScript]
const a = 10;
const b = 20;

console.log(a + b);
```

```java [Java]
public class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;

        System.out.println(a + b);
    }
}
```

---

## Syntax Highlighting

**TypeScript**

```ts
interface User {
  id: number
  name: string
  email: string
  role: 'admin' | 'user' | 'guest'
}

async function fetchUser(id: number): Promise<User> {
  const res = await fetch(`/api/users/${id}`)
  if (!res.ok) throw new Error(`HTTP ${res.status}`)
  return res.json() as Promise<User>
}
```

**Python**

```python
from dataclasses import dataclass
from typing import Optional
import httpx

@dataclass
class User:
    id: int
    name: str
    email: str

async def fetch_user(user_id: int) -> Optional[User]:
    async with httpx.AsyncClient() as client:
        r = await client.get(f"/api/users/{user_id}")
        r.raise_for_status()
        return User(**r.json())
```

**Bash**

```bash
#!/usr/bin/env bash
set -euo pipefail

PROJECT=$1
BRANCH=${2:-main}

echo "Cloning $PROJECT on branch $BRANCH..."
git clone --branch "$BRANCH" --depth 1 "https://github.com/$PROJECT.git"
cd "$(basename "$PROJECT")"
npm install && npm run build
echo "Done ✓"
```

**JSON**

```json
{
  "name": "gitfolio",
  "version": "1.0.0",
  "scripts": {
    "dev": "vite",
    "build": "vite build"
  },
  "dependencies": {
    "react": "^18.2.0",
    "marked": "^4.3.0",
    "highlight.js": "^11.9.0"
  }
}
```

---

## Tables

### HTTP Status Codes

| Code | Name                  | Meaning                                      |
|------|-----------------------|----------------------------------------------|
| 200  | OK                    | Request succeeded                            |
| 201  | Created               | Resource created successfully                |
| 301  | Moved Permanently     | Resource has a new permanent URL             |
| 400  | Bad Request           | Server cannot process the request            |
| 401  | Unauthorized          | Authentication is required                   |
| 403  | Forbidden             | Server refuses to authorize the request      |
| 404  | Not Found             | Resource does not exist                      |
| 500  | Internal Server Error | Server encountered an unexpected condition   |

### Framework Comparison

| Feature          | Express | Fastify | Hono   | Koa    |
|------------------|---------|---------|--------|--------|
| TypeScript       | ✓       | ✓✓      | ✓✓     | ✓      |
| Performance      | Fast    | Fastest | Fast   | Fast   |
| Middleware       | ✓       | Hooks   | ✓      | ✓      |
| File size        | ~200kb  | ~320kb  | ~14kb  | ~100kb |
| Learning curve   | Low     | Medium  | Low    | Medium |

---

## Lists

### Ordered

1. Install dependencies with `npm install`
2. Copy `.env.example` to `.env` and fill in your values
3. Run database migrations: `npm run migrate`
4. Start the development server: `npm run dev`
5. Open `http://localhost:5173` in your browser

### Unordered

- **React** — UI library for building component trees
- **Vite** — Lightning-fast bundler and dev server
  - HMR (Hot Module Replacement) out of the box
  - Native ESM support
- **Zustand** — Minimal state management
- **marked** — Fast markdown parser

### Task List

- [x] Set up project structure
- [x] Implement markdown parser
- [x] Add syntax highlighting
- [x] GitHub-style alerts
- [x] Code tabs (CommonJS / ESM)
- [ ] Search across file contents
- [ ] GitHub token support for higher rate limits
- [ ] Mobile sidebar polish

---

## Inline Formatting

Here is a sentence with **bold text**, _italic text_, ~~strikethrough~~, and `inline code`. You can also combine **_bold italic_** when needed.

Links work too: [Visit GitHub](https://github.com) opens in a new tab. Relative links just navigate within the app.

---

## Blockquote

> "Programs must be written for people to read, and only incidentally for machines to execute."
>
> — Harold Abelson, *Structure and Interpretation of Computer Programs*

---

## Horizontal Rule

Above the rule.

---

Below the rule.

---

## Nested Lists

- Frontend
  - Components
    - `Navbar.jsx` — top navigation bar
    - `FileSidebar.jsx` — collapsible file tree
    - `FileViewer.jsx` — content renderer
  - Utils
    - `markdown.js` — parsing pipeline
    - `github.js` — API calls
- Backend (future)
  - Auth
  - Storage

---

## Long Code Block (scroll test)

```javascript
// This line is intentionally very long to test horizontal scrolling in the code block renderer — it should scroll and not break the layout of the page at all.
const result = await Promise.all(files.map(async (file) => ({ path: file.path, content: await fetchFileContent(owner, repo, branch, file.path), type: getFileType(file.path) })))
```

---

## Mixed Content After Alert

> [!NOTE]
> The section below mixes a table, a code block, and a list — all immediately after an alert to test that spacing is consistent.

| Key         | Value           |
|-------------|-----------------|
| `owner`     | `facebook`      |
| `repo`      | `react`         |
| `branch`    | `main`          |

```bash
curl https://api.github.com/repos/facebook/react/git/trees/main?recursive=1
```

The response includes:
- `tree` — flat array of all file blobs
- `truncated` — `true` if the repo has more than 100,000 files
- `sha` — the tree SHA for caching purposes
