#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InternalInflateConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalInflateConstants)
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class InternalInflateConstants;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::InternalInflateConstants*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::InternalInflateConstants*, "Pathfinding.Ionic.Zlib", "InternalInflateConstants");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.InternalInflateConstants
class CORDL_TYPE InternalInflateConstants : public ::System::Object {
public:
// Declarations
/// @brief Field InflateMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InflateMask, put=setStaticF_InflateMask)) ::ArrayW<int32_t>  InflateMask;

static inline ::ArrayW<int32_t> getStaticF_InflateMask() ;

static inline void setStaticF_InflateMask(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalInflateConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalInflateConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalInflateConstants(InternalInflateConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalInflateConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalInflateConstants(InternalInflateConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28186};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zlib::InternalInflateConstants) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
