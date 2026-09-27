#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedRectTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackedRectTransform)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedRectTransform;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedRectTransform");
// [DisplayName("Rect Transform", null)]
// [CustomTrackedObject(typeof(UnityEngine.RectTransform), false)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedTransform, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedRectTransform
class CORDL_TYPE TrackedRectTransform : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform {
public:
// Declarations
/// @brief Field m_AnchorMaxToApply, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorMaxToApply, put=__cordl_internal_set_m_AnchorMaxToApply)) ::UnityEngine::Vector2  m_AnchorMaxToApply;

/// @brief Field m_AnchorMinToApply, offset 0x64, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorMinToApply, put=__cordl_internal_set_m_AnchorMinToApply)) ::UnityEngine::Vector2  m_AnchorMinToApply;

/// @brief Field m_AnchorPosToApply, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AnchorPosToApply, put=__cordl_internal_set_m_AnchorPosToApply)) ::UnityEngine::Vector3  m_AnchorPosToApply;

/// @brief Field m_PivotToApply, offset 0x74, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PivotToApply, put=__cordl_internal_set_m_PivotToApply)) ::UnityEngine::Vector2  m_PivotToApply;

/// @brief Field m_SizeDeltaToApply, offset 0x7c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SizeDeltaToApply, put=__cordl_internal_set_m_SizeDeltaToApply)) ::UnityEngine::Vector2  m_SizeDeltaToApply;

/// @brief Method AddPropertyHandlers, addr 0xb057e60, size 0x450, virtual true, abstract: false, final false
inline void AddPropertyHandlers(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*  handlers) ;

/// @brief Method ApplyLocale, addr 0xb05869c, size 0x144, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_0, addr 0xb058ddc, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_0(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_1, addr 0xb058de4, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_1(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_10, addr 0xb058e2c, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_10(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_2, addr 0xb058dec, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_2(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_3, addr 0xb058df4, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_3(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_4, addr 0xb058dfc, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_4(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_5, addr 0xb058e04, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_5(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_6, addr 0xb058e0c, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_6(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_7, addr 0xb058e14, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_7(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_8, addr 0xb058e1c, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_8(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__5_9, addr 0xb058e24, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__5_9(float_t  val) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_AnchorMaxToApply() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_AnchorMaxToApply() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_AnchorMinToApply() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_AnchorMinToApply() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_AnchorPosToApply() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_AnchorPosToApply() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PivotToApply() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PivotToApply() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_SizeDeltaToApply() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_SizeDeltaToApply() ;

constexpr void __cordl_internal_set_m_AnchorMaxToApply(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_AnchorMinToApply(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_AnchorPosToApply(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PivotToApply(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_SizeDeltaToApply(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xb058dd4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedRectTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedRectTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedRectTransform(TrackedRectTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedRectTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedRectTransform(TrackedRectTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25388};

/// @brief Field m_AnchorPosToApply, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_AnchorPosToApply;

/// @brief Field m_AnchorMinToApply, offset: 0x64, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_AnchorMinToApply;

/// @brief Field m_AnchorMaxToApply, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_AnchorMaxToApply;

/// @brief Field m_PivotToApply, offset: 0x74, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_PivotToApply;

/// @brief Field m_SizeDeltaToApply, offset: 0x7c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_SizeDeltaToApply;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform, ___m_AnchorPosToApply) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform, ___m_AnchorMinToApply) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform, ___m_AnchorMaxToApply) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform, ___m_PivotToApply) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform, ___m_SizeDeltaToApply) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedRectTransform) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
