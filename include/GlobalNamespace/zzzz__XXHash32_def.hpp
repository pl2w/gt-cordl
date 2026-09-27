#pragma once
// IWYU pragma private; include "GlobalNamespace/XXHash32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XXHash32)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
class XXHash32;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XXHash32*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XXHash32*, "", "XXHash32");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: XXHash32
class CORDL_TYPE XXHash32 : public ::System::Object {
public:
// Declarations
/// @brief Method Compute, addr 0x5b1d968, size 0x78, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s, uint32_t  seed) ;

/// @brief Method Compute, addr 0x5b1d9e0, size 0x474, virtual false, abstract: false, final false
static inline uint32_t Compute(::System::ReadOnlySpan_1<uint8_t>  input, uint32_t  seed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XXHash32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XXHash32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XXHash32(XXHash32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XXHash32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XXHash32(XXHash32 const& ) = delete;

/// @brief Field Prime32_1 offset 0xffffffff size 0x4
static constexpr uint32_t  Prime32_1{static_cast<uint32_t>(0x9e3779b1u)};

/// @brief Field Prime32_2 offset 0xffffffff size 0x4
static constexpr uint32_t  Prime32_2{static_cast<uint32_t>(0x85ebca77u)};

/// @brief Field Prime32_3 offset 0xffffffff size 0x4
static constexpr uint32_t  Prime32_3{static_cast<uint32_t>(0xc2b2ae3du)};

/// @brief Field Prime32_4 offset 0xffffffff size 0x4
static constexpr uint32_t  Prime32_4{static_cast<uint32_t>(0x27d4eb2fu)};

/// @brief Field Prime32_5 offset 0xffffffff size 0x4
static constexpr uint32_t  Prime32_5{static_cast<uint32_t>(0x165667b1u)};

/// @brief Field StripeSize offset 0xffffffff size 0x4
static constexpr int32_t  StripeSize{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3588};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XXHash32) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
