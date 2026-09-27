#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Hash160.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hash160)
namespace System {
class Object;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class Hash160;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Hash160*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Hash160*, "Technie.PhysicsCreator", "Hash160");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Hash160
class CORDL_TYPE Hash160 : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Method Equals, addr 0xadc8c1c, size 0xf4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xadc8bb8, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0xadc8b98, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::Technie::PhysicsCreator::Hash160* New_ctor() ;

static inline ::Technie::PhysicsCreator::Hash160* New_ctor(::ArrayW<uint8_t>  data) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xadc8b04, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xadc8b68, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method op_Equality, addr 0xadc8d10, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Equality(::Technie::PhysicsCreator::Hash160*  lhs, ::Technie::PhysicsCreator::Hash160*  rhs) ;

/// @brief Method op_Inequality, addr 0xadc8d2c, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::Technie::PhysicsCreator::Hash160*  lhs, ::Technie::PhysicsCreator::Hash160*  rhs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hash160() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hash160", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hash160(Hash160 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hash160", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hash160(Hash160 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30497};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Hash160, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Hash160) == 0x18, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
