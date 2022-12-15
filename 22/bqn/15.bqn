l←•Import "../../lib.bqn"
⟨compile,matchall,replaceall⟩←•Import "../../bqn-pcre2/pcre2.bqn"
⟨ToNums⟩←•Import "../../bqn-libs/strings.bqn"
i←>(<˘2‿2⥊·(⊑·ToNums⊑)¨"-?\d+"_matchall)¨•FLines "../inp/15"
[s,b]←⍉i
d←(+´·|-´)˘i

y←2_000_000
P1←{
  𝕊 y:
  ∧⟨⟩{
    0≤t←(𝕨⊑d)-|(1⊑pt←𝕨⊑s)-y ? 𝕩∾⟨⟨-t,t⟩⟩+⊑pt;𝕩 
  }´↕≠s
}
•Show ⊑¯1+0‿¯∞{sum‿max 𝕊 f‿l:⟨sum+(max<l)×1+l-f⌈max,max⌈l+1⟩}˜´⌽P1 y

0{
  y 𝕊 ·:
  ¯∞{
    𝕨 𝕊 f‿l:2=f-𝕨? •Show y+4_000_000×f-1, •Exit@;
    𝕨⌈1⊑𝕩
  }˜´⌽P1 y
}´↕4_000_001
