#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/JsonSerializerTrackedObject_ArrayResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerTrackedObject_ArrayResult)
// Forward declare root types
namespace GlobalNamespace {
struct JsonSerializerTrackedObject_ArrayResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "JsonSerializerTrackedObject/ArrayResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject/ArrayResult
struct CORDL_TYPE JsonSerializerTrackedObject_ArrayResult {
public:
// Declarations
 __declspec(property(get=get_IsArrayElement)) bool  IsArrayElement;

 __declspec(property(get=get_IsArraySize)) bool  IsArraySize;

/// @brief Method GetDataIndex, addr 0xb0562d8, size 0x1c4, virtual false, abstract: false, final false
inline int32_t GetDataIndex() ;

/// @brief Method .ctor, addr 0xb056278, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  p, int32_t  start, int32_t  bracketStart, int32_t  bracketEnd) ;

/// @brief Method get_IsArrayElement, addr 0xb05649c, size 0x90, virtual false, abstract: false, final false
inline bool get_IsArrayElement() ;

/// @brief Method get_IsArraySize, addr 0xb0562b4, size 0x24, virtual false, abstract: false, final false
inline bool get_IsArraySize() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerTrackedObject_ArrayResult() ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "arrayStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "arrayDataIndexStart", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "arrayDataIndexEnd", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonSerializerTrackedObject_ArrayResult(::StringW  path, int32_t  arrayStartIndex, int32_t  arrayDataIndexStart, int32_t  arrayDataIndexEnd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field path, offset: 0x0, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field arrayStartIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  arrayStartIndex;

/// @brief Field arrayDataIndexStart, offset: 0xc, size: 0x4, def value: None
 int32_t  arrayDataIndexStart;

/// @brief Field arrayDataIndexEnd, offset: 0x10, size: 0x4, def value: None
 int32_t  arrayDataIndexEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult, arrayStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult, arrayDataIndexStart) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult, arrayDataIndexEnd) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
