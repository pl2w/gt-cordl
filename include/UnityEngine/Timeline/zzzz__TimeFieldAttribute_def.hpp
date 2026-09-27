#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_UseEditMode_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(TimeFieldAttribute)
namespace GlobalNamespace {
struct TimeFieldAttribute_UseEditMode;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeFieldAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::TimeFieldAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TimeFieldAttribute*, "UnityEngine.Timeline", "TimeFieldAttribute");
// Dependencies UnityEngine.PropertyAttribute, UnityEngine.Timeline.TimeFieldAttribute::UseEditMode
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimeFieldAttribute
class CORDL_TYPE TimeFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using UseEditMode = ::GlobalNamespace::TimeFieldAttribute_UseEditMode;

/// @brief Field <useEditMode>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__useEditMode_k__BackingField, put=__cordl_internal_set__useEditMode_k__BackingField)) ::GlobalNamespace::TimeFieldAttribute_UseEditMode  _useEditMode_k__BackingField;

 __declspec(property(get=get_useEditMode)) ::GlobalNamespace::TimeFieldAttribute_UseEditMode  useEditMode;

static inline ::UnityEngine::Timeline::TimeFieldAttribute* New_ctor(::GlobalNamespace::TimeFieldAttribute_UseEditMode  useEditMode) ;

constexpr ::GlobalNamespace::TimeFieldAttribute_UseEditMode const& __cordl_internal_get__useEditMode_k__BackingField() const;

constexpr ::GlobalNamespace::TimeFieldAttribute_UseEditMode& __cordl_internal_get__useEditMode_k__BackingField() ;

constexpr void __cordl_internal_set__useEditMode_k__BackingField(::GlobalNamespace::TimeFieldAttribute_UseEditMode  value) ;

/// @brief Method .ctor, addr 0xb3cdf58, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::TimeFieldAttribute_UseEditMode  useEditMode) ;

/// [CompilerGenerated]
/// @brief Method get_useEditMode, addr 0xb3cdf50, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeFieldAttribute_UseEditMode get_useEditMode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeFieldAttribute(TimeFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeFieldAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeFieldAttribute(TimeFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28774};

/// [CompilerGenerated]
/// @brief Field <useEditMode>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::TimeFieldAttribute_UseEditMode  ____useEditMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimeFieldAttribute, ____useEditMode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::TimeFieldAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
