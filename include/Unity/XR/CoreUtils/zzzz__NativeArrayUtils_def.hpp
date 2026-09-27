#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/NativeArrayUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayUtils)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class NativeArrayUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::NativeArrayUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::NativeArrayUtils*, "Unity.XR.CoreUtils", "NativeArrayUtils");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.NativeArrayUtils
class CORDL_TYPE NativeArrayUtils : public ::System::Object {
public:
// Declarations
/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  capacity, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeArrayUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeArrayUtils(NativeArrayUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeArrayUtils(NativeArrayUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::NativeArrayUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
