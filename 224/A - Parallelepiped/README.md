<h2><a href="https://codeforces.com/contest/224/problem/A" target="_blank" rel="noopener noreferrer">224A — Parallelepiped</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 224A](https://codeforces.com/contest/224/problem/A) |

## Topics
`brute force` `geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Parallelepiped</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You've got a rectangular parallelepiped with integer edge lengths. You know the areas of its three faces that have a common vertex. Your task is to find the sum of lengths of all 12 edges of this parallelepiped.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and the single line contains three space-separated integers — the areas of the parallelepiped's faces. The area's values are positive <span class="tex-span">( > 0)</span> and do not exceed <span class="tex-span">10<sup class="upper-index">4</sup></span>. It is guaranteed that there exists at least one parallelepiped that satisfies the problem statement.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single number — the sum of all edges of the parallelepiped.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004284510177905946" id="id006035582752382512" class="input-output-copier">Copy</div></div><pre id="id004284510177905946">1 1 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008096504242656495" id="id008025387966523542" class="input-output-copier">Copy</div></div><pre id="id008096504242656495">12<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009000080406623141" id="id009663310865523593" class="input-output-copier">Copy</div></div><pre id="id009000080406623141">4 6 6<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004739810922902965" id="id008237671432933387" class="input-output-copier">Copy</div></div><pre id="id004739810922902965">28<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample the parallelepiped has sizes <span class="tex-span">1 × 1 × 1</span>, in the second one — <span class="tex-span">2 × 2 × 3</span>.</p></div>