#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Console.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Console)
namespace UnityEngine {
class Logger;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class Console;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Console*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Console*, "Technie.PhysicsCreator", "Console");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Console
class CORDL_TYPE Console : public ::System::Object {
public:
// Declarations
/// @brief Field Technie, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Technie, put=setStaticF_Technie)) ::StringW  Technie;

/// @brief Field output, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_output, put=setStaticF_output)) ::UnityEngine::Logger*  output;

static inline ::StringW getStaticF_Technie() ;

static inline ::UnityEngine::Logger* getStaticF_output() ;

static inline void setStaticF_Technie(::StringW  value) ;

static inline void setStaticF_output(::UnityEngine::Logger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Console() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Console(Console && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Console(Console const& ) = delete;

/// @brief Field ENABLE_JOINT_SUPPORT offset 0xffffffff size 0x1
static constexpr bool  ENABLE_JOINT_SUPPORT{false};

/// @brief Field IS_DEBUG_OUTPUT_ENABLED offset 0xffffffff size 0x1
static constexpr bool  IS_DEBUG_OUTPUT_ENABLED{false};

/// @brief Field SHOW_SHADOW_HIERARCHY offset 0xffffffff size 0x1
static constexpr bool  SHOW_SHADOW_HIERARCHY{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::Console) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
