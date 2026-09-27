#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HashUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashUtil)
namespace Technie::PhysicsCreator {
class Hash160;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class HashUtil;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::HashUtil*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::HashUtil*, "Technie.PhysicsCreator", "HashUtil");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.HashUtil
class CORDL_TYPE HashUtil : public ::System::Object {
public:
// Declarations
/// @brief Method CalcHash, addr 0xadc9134, size 0xd0, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Hash160* CalcHash(::StringW  input) ;

/// @brief Method CalcHash, addr 0xadc8d5c, size 0x2f8, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::Hash160* CalcHash(::UnityEngine::Mesh*  srcMesh) ;

static inline ::Technie::PhysicsCreator::HashUtil* New_ctor() ;

/// @brief Method ToBytes, addr 0xadc9054, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytes(::UnityEngine::Vector3  vec) ;

/// @brief Method .ctor, addr 0xadc9204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashUtil(HashUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashUtil(HashUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30498};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::HashUtil) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
