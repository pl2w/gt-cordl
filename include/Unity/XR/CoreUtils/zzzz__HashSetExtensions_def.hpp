#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/HashSetExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HashSetExtensions)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class HashSetExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::HashSetExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::HashSetExtensions*, "Unity.XR.CoreUtils", "HashSetExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.HashSetExtensions
class CORDL_TYPE HashSetExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ExceptWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  self, ::System::Collections::Generic::HashSet_1<T>*  other) ;

/// [Extension]
/// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T First(::System::Collections::Generic::HashSet_1<T>*  set) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashSetExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSetExtensions(HashSetExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSetExtensions(HashSetExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::HashSetExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
