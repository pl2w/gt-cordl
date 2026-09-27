#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Annotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Variant_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_Annotation)
namespace GlobalNamespace {
struct Annotation_Qpl_OVRPlugin_Builder;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Variant;
}
// Forward declare root types
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Annotation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Qpl_OVRPlugin_Annotation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Qpl_OVRPlugin_Annotation, "", "OVRPlugin/Qpl/Annotation");
// [IsReadOnly]
// Dependencies OVRPlugin::Qpl::Variant
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/Annotation
struct CORDL_TYPE Qpl_OVRPlugin_Annotation {
public:
// Declarations
using Builder = ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder;

 __declspec(property(get=get_KeyStr)) ::StringW  KeyStr;

/// @brief Method .ctor, addr 0xa614160, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  value) ;

/// @brief Method get_KeyStr, addr 0xa614104, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_KeyStr() ;

// Ctor Parameters []
// @brief default ctor
constexpr Qpl_OVRPlugin_Annotation() ;

// Ctor Parameters [CppParam { name: "Key", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::GlobalNamespace::Qpl_OVRPlugin_Variant", modifiers: "", def_value: None, comment: None }]
constexpr Qpl_OVRPlugin_Annotation(uint8_t*  Key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Key;

/// @brief Field Value, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::Qpl_OVRPlugin_Variant  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Qpl_OVRPlugin_Annotation, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Qpl_OVRPlugin_Annotation, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Qpl_OVRPlugin_Annotation) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
