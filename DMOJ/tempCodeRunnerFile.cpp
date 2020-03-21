t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string line;
//     cin >> line;

//     int i = 0;
//     bool b = true;

//     // cout << ((' ' == ' ') ? "yess" : "noo");

//     for (auto c : line)
//         if (c == ' ')
//             i = i + 1;
//         else if (c == 'F')
//             b = false;

//     cout << "counted: " << i;

//     i = i % 2;

//     // if odd # of nots --> change bool
//     if (i == 1)
//     {
//         cout << "changing signs";
//         if (b)
//             b = false;
//         else
//             b = true;
//     }

//     if (b)
//         cout << "True";
//     else
//         cout << "False";
//     return 0;
// }