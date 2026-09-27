#pragma once
// IWYU pragma private; include "GlobalNamespace/LuaHashing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LuaHashing)
// Forward declare root types
namespace GlobalNamespace {
class LuaHashing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LuaHashing*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuaHashing*, "", "LuaHashing");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LuaHashing
class CORDL_TYPE LuaHashing : public ::System::Object {
public:
// Declarations
/// [BurstCompile]
/// @brief Method ByteHash, addr 0x5a92d98, size 0x98, virtual false, abstract: false, final false
static inline int32_t ByteHash(::ArrayW<uint8_t>  bytes) ;

/// @brief Method ByteHash, addr 0x5a92ce4, size 0xb4, virtual false, abstract: false, final false
static inline int32_t ByteHash(::StringW  bytes) ;

/// [BurstCompile]
/// @brief Method ByteHash, addr 0x5a925b0, size 0x60, virtual false, abstract: false, final false
static inline int32_t ByteHash(uint8_t*  bytes) ;

/// [BurstCompile]
/// @brief Method ByteHash, addr 0x5a91804, size 0x6c, virtual false, abstract: false, final false
static inline int32_t ByteHash(uint8_t*  bytes, int32_t  len) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuaHashing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuaHashing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuaHashing(LuaHashing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuaHashing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuaHashing(LuaHashing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3216};

/// @brief Field k_Seed offset 0xffffffff size 0x4
static constexpr int32_t  k_Seed{static_cast<int32_t>(0x15051505)};

/// @brief Field k_enhancer offset 0xffffffff size 0x4
static constexpr int32_t  k_enhancer{static_cast<int32_t>(0x624195a0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LuaHashing) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
