#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticHashExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticHashExt)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticHashExt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticHashExt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticHashExt*, "", "StaticHashExt");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticHashExt
class CORDL_TYPE StaticHashExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18ae4, size 0x1c, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(bool  b) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18c5c, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(::ArrayW<uint8_t>  bytes) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18ab8, size 0x2c, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(double_t  d) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18b00, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(::System::DateTime  dt) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18a28, size 0x68, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(float_t  f) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18960, size 0x64, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(int32_t  i) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18a90, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(int64_t  l) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b18b80, size 0xdc, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(::StringW  s) ;

/// [Extension]
/// @brief Method GetStaticHash, addr 0x5b189c4, size 0x64, virtual false, abstract: false, final false
static inline int32_t GetStaticHash(uint32_t  u) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticHashExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticHashExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticHashExt(StaticHashExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticHashExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticHashExt(StaticHashExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StaticHashExt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
