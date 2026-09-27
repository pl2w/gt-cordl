#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_UpdateFlags_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlittableArrayWrapper)
namespace GlobalNamespace {
struct BlittableArrayWrapper_UpdateFlags;
}
// Forward declare root types
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::BlittableArrayWrapper);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::BlittableArrayWrapper, "UnityEngine.Bindings", "BlittableArrayWrapper");
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [VisibleToOtherModules]
// [IsByRefLike]
// Dependencies UnityEngine.Bindings.BlittableArrayWrapper::UpdateFlags
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.BlittableArrayWrapper
struct CORDL_TYPE BlittableArrayWrapper {
public:
// Declarations
using UpdateFlags = ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags;

/// @brief Method Unmarshal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unmarshal(::by_ref<::ArrayW<T>>  array) ;

/// @brief Method .ctor, addr 0xb5fb784, size 0xc, virtual false, abstract: false, final false
inline void _ctor(void*  data, int32_t  size) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlittableArrayWrapper() ;

// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "updateFlags", ty: "::GlobalNamespace::BlittableArrayWrapper_UpdateFlags", modifiers: "", def_value: None, comment: None }]
constexpr BlittableArrayWrapper(void*  data, int32_t  size, ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  updateFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 void*  data;

/// @brief Field size, offset: 0x8, size: 0x4, def value: None
 int32_t  size;

/// @brief Field updateFlags, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  updateFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::BlittableArrayWrapper, updateFlags) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Bindings::BlittableArrayWrapper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
