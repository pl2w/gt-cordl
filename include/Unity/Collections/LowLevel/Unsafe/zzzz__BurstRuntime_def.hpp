#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstRuntime)
namespace GlobalNamespace {
template<typename T>
struct BurstRuntime_HashCode64_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class BurstRuntime;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::BurstRuntime*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::BurstRuntime*, "Unity.Collections.LowLevel.Unsafe", "BurstRuntime");
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.BurstRuntime
class CORDL_TYPE BurstRuntime : public ::System::Object {
public:
// Declarations
template<typename T>
using HashCode64_1 = ::GlobalNamespace::BurstRuntime_HashCode64_1<T>;

/// @brief Method GetHashCode64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int64_t GetHashCode64() ;

/// @brief Method HashStringWithFNV1A64, addr 0xb55f940, size 0x8c, virtual false, abstract: false, final false
static inline int64_t HashStringWithFNV1A64(::StringW  text) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstRuntime(BurstRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstRuntime(BurstRuntime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14738};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::BurstRuntime) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
