<h2><a href="https://codeforces.com/contest/2004/problem/C" target="_blank" rel="noopener noreferrer">2004C — Splitting Items</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2004C](https://codeforces.com/contest/2004/problem/C) |

## Topics
`games` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Splitting Items</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice and Bob have $$$n$$$ items they'd like to split between them, so they decided to play a game. All items have a cost, and the $$$i$$$-th item costs $$$a_i$$$. Players move in turns starting from Alice.</p><p>In each turn, the player chooses one of the remaining items and takes it. The game goes on until no items are left.</p><p>Let's say that $$$A$$$ is the total cost of items taken by Alice and $$$B$$$ is the total cost of Bob's items. The resulting <span class="tex-font-style-it">score</span> of the game then will be equal to $$$A - B$$$.</p><p>Alice wants to maximize the score, while Bob wants to minimize it. Both Alice and Bob will play optimally.</p><p>But the game will take place tomorrow, so today Bob can modify the costs a little. He can increase the costs $$$a_i$$$ of several (possibly none or all) items by an integer value (possibly, by the same value or by different values for each item). However, the total increase must be less than or equal to $$$k$$$. Otherwise, Alice may suspect something. Note that Bob <span class="tex-font-style-bf">can't decrease</span> costs, only increase.</p><p>What is the minimum possible score Bob can achieve?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases. Then $$$t$$$ cases follow.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 2 \cdot 10^5$$$; $$$0 \le k \le 10^9$$$) — the number of items and the maximum total increase Bob can make.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the initial costs of the items.</p><p>It's guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the minimum possible score $$$A - B$$$ after Bob increases the costs of several (possibly none or all) items.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006889240815445958" id="id00821003517877136" class="input-output-copier">Copy</div></div><pre data-content="4
2 5
1 10
3 0
10 15 12
4 6
3 1 2 4
2 4
6 9
" id="id006889240815445958"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 10</div><div class="test-example-line test-example-line-even test-example-line-2">3 0</div><div class="test-example-line test-example-line-even test-example-line-2">10 15 12</div><div class="test-example-line test-example-line-odd test-example-line-3">4 6</div><div class="test-example-line test-example-line-odd test-example-line-3">3 1 2 4</div><div class="test-example-line test-example-line-even test-example-line-4">2 4</div><div class="test-example-line test-example-line-even test-example-line-4">6 9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018206961964851154" id="id0006982702649152772" class="input-output-copier">Copy</div></div><pre id="id0018206961964851154">4
13
0
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Bob can increase $$$a_1$$$ by $$$5$$$, making costs equal to $$$[6, 10]$$$. Tomorrow, Alice will take $$$10$$$ and Bob will take $$$6$$$. The total score will be equal to $$$10 - 6 = 4$$$, and it's the minimum possible.</p><p>In the second test case, Bob can't change costs. So the score will be equal to $$$(15 + 10) - 12 = 13$$$, since Alice will take $$$15$$$, Bob will take $$$12$$$, and Alice — $$$10$$$.</p><p>In the third test case, Bob, for example, can increase $$$a_1$$$ by $$$1$$$, $$$a_2$$$ by $$$3$$$, and $$$a_3$$$ by $$$2$$$. The total change is equal to $$$1 + 3 + 2 \le 6$$$ and costs will be equal to $$$[4, 4, 4, 4]$$$. Obviously, the score will be equal to $$$(4 + 4) - (4 + 4) = 0$$$.</p><p>In the fourth test case, Bob can increase $$$a_1$$$ by $$$3$$$, making costs equal to $$$[9, 9]$$$. The score will be equal to $$$9 - 9 = 0$$$.</p></div>