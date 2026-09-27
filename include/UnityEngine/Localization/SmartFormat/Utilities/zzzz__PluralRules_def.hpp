#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/PluralRules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PluralRules)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Decimal;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules_PluralRuleDelegate;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules___c;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules_PluralRuleDelegate;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules*, "UnityEngine.Localization.SmartFormat.Utilities", "PluralRules");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*, "UnityEngine.Localization.SmartFormat.Utilities", "PluralRules/PluralRuleDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c*, "UnityEngine.Localization.SmartFormat.Utilities", "PluralRules/<>c");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.PluralRules
class CORDL_TYPE PluralRules : public ::System::Object {
public:
// Declarations
using PluralRuleDelegate = ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate;

using __c = ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c;

/// @brief Field IsoLangToDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsoLangToDelegate, put=setStaticF_IsoLangToDelegate)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>*  IsoLangToDelegate;

/// [Extension]
/// @brief Method Between, addr 0xb0312ec, size 0x11c, virtual false, abstract: false, final false
static inline bool Between(::System::Decimal  value, ::System::Decimal  min, ::System::Decimal  max) ;

/// @brief Method GetPluralRule, addr 0xb0311e8, size 0x104, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* GetPluralRule(::StringW  twoLetterIsoLanguageName) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>* getStaticF_IsoLangToDelegate() ;

/// @brief Method get_Arabic, addr 0xb03045c, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Arabic() ;

/// @brief Method get_Breton, addr 0xb030528, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Breton() ;

/// @brief Method get_CentralMoroccoTamazight, addr 0xb03111c, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_CentralMoroccoTamazight() ;

/// @brief Method get_Czech, addr 0xb0305f4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Czech() ;

/// @brief Method get_DualFromZeroToTwo, addr 0xb0301f8, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_DualFromZeroToTwo() ;

/// @brief Method get_DualOneOther, addr 0xb030060, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_DualOneOther() ;

/// @brief Method get_DualWithZero, addr 0xb03012c, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_DualWithZero() ;

/// @brief Method get_Langi, addr 0xb030858, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Langi() ;

/// @brief Method get_Latvian, addr 0xb0309f0, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Latvian() ;

/// @brief Method get_Lithuanian, addr 0xb030924, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Lithuanian() ;

/// @brief Method get_Macedonian, addr 0xb030abc, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Macedonian() ;

/// @brief Method get_Maltese, addr 0xb030c54, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Maltese() ;

/// @brief Method get_Manx, addr 0xb03078c, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Manx() ;

/// @brief Method get_Moldavian, addr 0xb030b88, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Moldavian() ;

/// @brief Method get_Polish, addr 0xb030d20, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Polish() ;

/// @brief Method get_Romanian, addr 0xb030dec, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Romanian() ;

/// @brief Method get_RussianSerboCroatian, addr 0xb030390, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_RussianSerboCroatian() ;

/// @brief Method get_Singular, addr 0xb02fef4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Singular() ;

/// @brief Method get_Slovak, addr 0xb030f84, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Slovak() ;

/// @brief Method get_Slovenian, addr 0xb031050, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Slovenian() ;

/// @brief Method get_Tachelhit, addr 0xb030eb8, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Tachelhit() ;

/// @brief Method get_TripleOneTwoOther, addr 0xb0302c4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_TripleOneTwoOther() ;

/// @brief Method get_Welsh, addr 0xb0306c0, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* get_Welsh() ;

static inline void setStaticF_IsoLangToDelegate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluralRules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluralRules", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluralRules(PluralRules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluralRules", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluralRules(PluralRules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.PluralRules/<>c
class CORDL_TYPE PluralRules___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__10_0;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__12_0;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__14_0;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__16_0;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__18_0;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__20_0;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__22_0;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__24_0;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__26_0;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__28_0;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__2_0;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__30_0;

/// @brief Field <>9__32_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__32_0, put=setStaticF___9__32_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__32_0;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__34_0;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__36_0;

/// @brief Field <>9__38_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_0, put=setStaticF___9__38_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__38_0;

/// @brief Field <>9__40_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_0, put=setStaticF___9__40_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__40_0;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__42_0;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__44_0;

/// @brief Field <>9__46_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__46_0, put=setStaticF___9__46_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__46_0;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__4_0;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__6_0;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__8_0;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb032f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Arabic>b__14_0, addr 0xb033644, size 0x274, virtual false, abstract: false, final false
inline int32_t _get_Arabic_b__14_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Breton>b__16_0, addr 0xb0338b8, size 0x1b0, virtual false, abstract: false, final false
inline int32_t _get_Breton_b__16_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_CentralMoroccoTamazight>b__46_0, addr 0xb03526c, size 0x144, virtual false, abstract: false, final false
inline int32_t _get_CentralMoroccoTamazight_b__46_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Czech>b__18_0, addr 0xb033a68, size 0x118, virtual false, abstract: false, final false
inline int32_t _get_Czech_b__18_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_DualFromZeroToTwo>b__8_0, addr 0xb033218, size 0xb8, virtual false, abstract: false, final false
inline int32_t _get_DualFromZeroToTwo_b__8_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_DualOneOther>b__4_0, addr 0xb032f9c, size 0x1c4, virtual false, abstract: false, final false
inline int32_t _get_DualOneOther_b__4_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_DualWithZero>b__6_0, addr 0xb033160, size 0xb8, virtual false, abstract: false, final false
inline int32_t _get_DualWithZero_b__6_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Langi>b__24_0, addr 0xb033eb0, size 0x128, virtual false, abstract: false, final false
inline int32_t _get_Langi_b__24_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Latvian>b__28_0, addr 0xb034280, size 0x178, virtual false, abstract: false, final false
inline int32_t _get_Latvian_b__28_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Lithuanian>b__26_0, addr 0xb033fd8, size 0x2a8, virtual false, abstract: false, final false
inline int32_t _get_Lithuanian_b__26_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Macedonian>b__30_0, addr 0xb0343f8, size 0x10c, virtual false, abstract: false, final false
inline int32_t _get_Macedonian_b__30_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Maltese>b__34_0, addr 0xb0346bc, size 0x228, virtual false, abstract: false, final false
inline int32_t _get_Maltese_b__34_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Manx>b__22_0, addr 0xb033d30, size 0x180, virtual false, abstract: false, final false
inline int32_t _get_Manx_b__22_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Moldavian>b__32_0, addr 0xb034504, size 0x1b8, virtual false, abstract: false, final false
inline int32_t _get_Moldavian_b__32_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Polish>b__36_0, addr 0xb0348e4, size 0x3ac, virtual false, abstract: false, final false
inline int32_t _get_Polish_b__36_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Romanian>b__38_0, addr 0xb034c90, size 0x188, virtual false, abstract: false, final false
inline int32_t _get_Romanian_b__38_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_RussianSerboCroatian>b__12_0, addr 0xb0333c0, size 0x284, virtual false, abstract: false, final false
inline int32_t _get_RussianSerboCroatian_b__12_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Singular>b__2_0, addr 0xb032f94, size 0x8, virtual false, abstract: false, final false
inline int32_t _get_Singular_b__2_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Slovak>b__42_0, addr 0xb034f60, size 0x118, virtual false, abstract: false, final false
inline int32_t _get_Slovak_b__42_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Slovenian>b__44_0, addr 0xb035078, size 0x1f4, virtual false, abstract: false, final false
inline int32_t _get_Slovenian_b__44_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Tachelhit>b__40_0, addr 0xb034e18, size 0x148, virtual false, abstract: false, final false
inline int32_t _get_Tachelhit_b__40_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_TripleOneTwoOther>b__10_0, addr 0xb0332d0, size 0xf0, virtual false, abstract: false, final false
inline int32_t _get_TripleOneTwoOther_b__10_0(::System::Decimal  n, int32_t  c) ;

/// @brief Method <get_Welsh>b__20_0, addr 0xb033b80, size 0x1b0, virtual false, abstract: false, final false
inline int32_t _get_Welsh_b__20_0(::System::Decimal  n, int32_t  c) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c* getStaticF___9() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__10_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__12_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__14_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__16_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__18_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__20_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__22_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__24_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__26_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__28_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__2_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__30_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__32_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__34_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__36_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__38_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__40_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__42_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__44_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__46_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__4_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__6_0() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__8_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c*  value) ;

static inline void setStaticF___9__10_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__12_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__14_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__16_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__18_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__20_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__22_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__24_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__26_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__28_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__2_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__30_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__32_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__34_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__36_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__38_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__40_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__42_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__44_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__46_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__4_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__6_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

static inline void setStaticF___9__8_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluralRules___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluralRules___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluralRules___c(PluralRules___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluralRules___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluralRules___c(PluralRules___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// Dependencies System.MulticastDelegate
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.PluralRules/PluralRuleDelegate
class CORDL_TYPE PluralRules_PluralRuleDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb032e2c, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Decimal  value, int32_t  pluralCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb032efc, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb032e18, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::System::Decimal  value, int32_t  pluralCount) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb02ffc0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluralRules_PluralRuleDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluralRules_PluralRuleDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluralRules_PluralRuleDelegate(PluralRules_PluralRuleDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluralRules_PluralRuleDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluralRules_PluralRuleDelegate(PluralRules_PluralRuleDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
