#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/GradientUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
#include "UnityEngine/zzzz__GradientColorKey_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GradientUtility)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class GradientUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "GradientUtility");
// Dependencies System.Object, UnityEngine.GradientAlphaKey, UnityEngine.GradientColorKey
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.GradientUtility
class CORDL_TYPE GradientUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_AlphaKeyArrays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AlphaKeyArrays, put=setStaticF_s_AlphaKeyArrays)) ::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>  s_AlphaKeyArrays;

/// @brief Field s_AlphaKeyTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AlphaKeyTimes, put=setStaticF_s_AlphaKeyTimes)) ::System::Collections::Generic::List_1<float_t>*  s_AlphaKeyTimes;

/// @brief Field s_ColorKeyArrays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColorKeyArrays, put=setStaticF_s_ColorKeyArrays)) ::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>  s_ColorKeyArrays;

/// @brief Field s_ColorKeyTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColorKeyTimes, put=setStaticF_s_ColorKeyTimes)) ::System::Collections::Generic::List_1<float_t>*  s_ColorKeyTimes;

/// @brief Field s_TruncatedAlphaKeyTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TruncatedAlphaKeyTimes, put=setStaticF_s_TruncatedAlphaKeyTimes)) ::System::Collections::Generic::HashSet_1<int32_t>*  s_TruncatedAlphaKeyTimes;

/// @brief Field s_TruncatedColorKeyTimes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TruncatedColorKeyTimes, put=setStaticF_s_TruncatedColorKeyTimes)) ::System::Collections::Generic::HashSet_1<int32_t>*  s_TruncatedColorKeyTimes;

/// @brief Method AddAlphaKeyIfUnique, addr 0xb4265d8, size 0x13c, virtual false, abstract: false, final false
static inline void AddAlphaKeyIfUnique(float_t  keyTime) ;

/// @brief Method AddColorKeyIfUnique, addr 0xb42649c, size 0x13c, virtual false, abstract: false, final false
static inline void AddColorKeyIfUnique(float_t  keyTime) ;

/// @brief Method AddUniqueAlphaKeys, addr 0xb425fec, size 0xac, virtual false, abstract: false, final false
static inline void AddUniqueAlphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey>  keys) ;

/// @brief Method AddUniqueColorKeys, addr 0xb425f40, size 0xac, virtual false, abstract: false, final false
static inline void AddUniqueColorKeys(::ArrayW<::UnityEngine::GradientColorKey>  keys) ;

/// @brief Method CopyGradient, addr 0xb42644c, size 0x50, virtual false, abstract: false, final false
static inline void CopyGradient(::UnityEngine::Gradient*  source, ::UnityEngine::Gradient*  destination) ;

/// @brief Method GetAlphaKeyArray, addr 0xb4267ec, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GradientAlphaKey> GetAlphaKeyArray(int32_t  size) ;

/// @brief Method GetColorKeyArray, addr 0xb42673c, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GradientColorKey> GetColorKeyArray(int32_t  size) ;

/// @brief Method Lerp, addr 0xb425c20, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Gradient* Lerp(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t, bool  lerpColors, bool  lerpAlphas) ;

/// @brief Method Lerp, addr 0xb425ce0, size 0x260, virtual false, abstract: false, final false
static inline void Lerp(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, ::UnityEngine::Gradient*  output, float_t  t, bool  lerpColors, bool  lerpAlphas) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility* New_ctor() ;

/// @brief Method PrepareAlphaKeys, addr 0xb4262d8, size 0x174, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GradientAlphaKey> PrepareAlphaKeys(::System::Collections::Generic::List_1<float_t>*  keyTimes, ::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t) ;

/// @brief Method PrepareColorKeys, addr 0xb426120, size 0x1b8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::GradientColorKey> PrepareColorKeys(::System::Collections::Generic::List_1<float_t>*  keyTimes, ::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t) ;

/// @brief Method ReduceKeysIfNeeded, addr 0xb426098, size 0x88, virtual false, abstract: false, final false
static inline void ReduceKeysIfNeeded(::System::Collections::Generic::List_1<float_t>*  keyTimes, int32_t  maxKeys) ;

/// @brief Method TruncatePrecision, addr 0xb426714, size 0x28, virtual false, abstract: false, final false
static inline int32_t TruncatePrecision(float_t  value) ;

/// @brief Method .ctor, addr 0xb42689c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>> getStaticF_s_AlphaKeyArrays() ;

static inline ::System::Collections::Generic::List_1<float_t>* getStaticF_s_AlphaKeyTimes() ;

static inline ::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>> getStaticF_s_ColorKeyArrays() ;

static inline ::System::Collections::Generic::List_1<float_t>* getStaticF_s_ColorKeyTimes() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_s_TruncatedAlphaKeyTimes() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_s_TruncatedColorKeyTimes() ;

static inline void setStaticF_s_AlphaKeyArrays(::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>  value) ;

static inline void setStaticF_s_AlphaKeyTimes(::System::Collections::Generic::List_1<float_t>*  value) ;

static inline void setStaticF_s_ColorKeyArrays(::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>  value) ;

static inline void setStaticF_s_ColorKeyTimes(::System::Collections::Generic::List_1<float_t>*  value) ;

static inline void setStaticF_s_TruncatedAlphaKeyTimes(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

static inline void setStaticF_s_TruncatedColorKeyTimes(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GradientUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GradientUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GradientUtility(GradientUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GradientUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GradientUtility(GradientUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11205};

/// @brief Field k_MaxGradientColorKeys offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxGradientColorKeys{static_cast<int32_t>(0x8)};

/// @brief Field k_Precision offset 0xffffffff size 0x4
static constexpr int32_t  k_Precision{static_cast<int32_t>(0x64)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
