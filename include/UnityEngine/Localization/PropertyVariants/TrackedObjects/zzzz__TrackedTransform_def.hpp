#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackedTransform)
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
class TrackedTransform;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedTransform");
// [DisplayName("Transform", null)]
// [CustomTrackedObject(typeof(UnityEngine.Transform), false)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedTransform
class CORDL_TYPE TrackedTransform : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject {
public:
// Declarations
/// @brief Field m_PositionToApply, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PositionToApply, put=__cordl_internal_set_m_PositionToApply)) ::UnityEngine::Vector3  m_PositionToApply;

/// @brief Field m_PropertyHandlers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyHandlers, put=__cordl_internal_set_m_PropertyHandlers)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*  m_PropertyHandlers;

/// @brief Field m_RotationToApply, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RotationToApply, put=__cordl_internal_set_m_RotationToApply)) ::UnityEngine::Quaternion  m_RotationToApply;

/// @brief Field m_ScaleToApply, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ScaleToApply, put=__cordl_internal_set_m_ScaleToApply)) ::UnityEngine::Vector3  m_ScaleToApply;

/// @brief Method AddPropertyHandlers, addr 0xb0582b0, size 0x3ec, virtual true, abstract: false, final false
inline void AddPropertyHandlers(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*  handlers) ;

/// @brief Method ApplyLocale, addr 0xb0587e0, size 0x5f4, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale) ;

/// @brief Method CanTrackProperty, addr 0xb058eb8, size 0x90, virtual true, abstract: false, final false
inline bool CanTrackProperty(::StringW  propertyPath) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_0, addr 0xb058f48, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_0(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_1, addr 0xb058f50, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_1(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_2, addr 0xb058f58, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_2(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_3, addr 0xb058f60, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_3(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_4, addr 0xb058f68, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_4(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_5, addr 0xb058f70, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_5(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_6, addr 0xb058f78, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_6(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_7, addr 0xb058f80, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_7(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_8, addr 0xb058f88, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_8(float_t  val) ;

/// [CompilerGenerated]
/// @brief Method <AddPropertyHandlers>b__4_9, addr 0xb058f90, size 0x8, virtual false, abstract: false, final false
inline void _AddPropertyHandlers_b__4_9(float_t  val) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PositionToApply() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PositionToApply() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>* const& __cordl_internal_get_m_PropertyHandlers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*& __cordl_internal_get_m_PropertyHandlers() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_RotationToApply() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_RotationToApply() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ScaleToApply() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ScaleToApply() ;

constexpr void __cordl_internal_set_m_PositionToApply(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PropertyHandlers(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set_m_RotationToApply(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_ScaleToApply(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb058dd8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedTransform(TrackedTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedTransform(TrackedTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25390};

/// @brief Field m_PositionToApply, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PositionToApply;

/// @brief Field m_RotationToApply, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_RotationToApply;

/// @brief Field m_ScaleToApply, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ScaleToApply;

/// @brief Field m_PropertyHandlers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<float_t>*>*  ___m_PropertyHandlers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform, ___m_PositionToApply) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform, ___m_RotationToApply) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform, ___m_ScaleToApply) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform, ___m_PropertyHandlers) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTransform) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
