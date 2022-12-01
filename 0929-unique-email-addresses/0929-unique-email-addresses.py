class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
            unique = set()

            for e in emails:
                j, local = 0, ""

                while e[j] not in ['+', '@']:
                    if e[j] != '.':
                        local += e[j]
                    j += 1

                while e[j] != '@':
                    j += 1

                domain = ""
                while j < len(e):
                    domain += e[j]
                    j += 1

                unique.add(local + domain)

            return len(unique)

