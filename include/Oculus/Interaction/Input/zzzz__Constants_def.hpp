#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace Oculus::Interaction::Input {
class Constants;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Constants*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Constants*, "Oculus.Interaction.Input", "Constants");
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
/// @brief Field LeftDistal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftDistal, put=setStaticF_LeftDistal)) ::UnityEngine::Vector3  LeftDistal;

/// @brief Field LeftDorsal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftDorsal, put=setStaticF_LeftDorsal)) ::UnityEngine::Vector3  LeftDorsal;

/// @brief Field LeftPalmar, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftPalmar, put=setStaticF_LeftPalmar)) ::UnityEngine::Vector3  LeftPalmar;

/// @brief Field LeftPinkySide, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftPinkySide, put=setStaticF_LeftPinkySide)) ::UnityEngine::Vector3  LeftPinkySide;

/// @brief Field LeftProximal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftProximal, put=setStaticF_LeftProximal)) ::UnityEngine::Vector3  LeftProximal;

/// @brief Field LeftThumbSide, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_LeftThumbSide, put=setStaticF_LeftThumbSide)) ::UnityEngine::Vector3  LeftThumbSide;

/// @brief Field RightDistal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightDistal, put=setStaticF_RightDistal)) ::UnityEngine::Vector3  RightDistal;

/// @brief Field RightDorsal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightDorsal, put=setStaticF_RightDorsal)) ::UnityEngine::Vector3  RightDorsal;

/// @brief Field RightPalmar, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightPalmar, put=setStaticF_RightPalmar)) ::UnityEngine::Vector3  RightPalmar;

/// @brief Field RightPinkySide, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightPinkySide, put=setStaticF_RightPinkySide)) ::UnityEngine::Vector3  RightPinkySide;

/// @brief Field RightProximal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightProximal, put=setStaticF_RightProximal)) ::UnityEngine::Vector3  RightProximal;

/// @brief Field RightThumbSide, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_RightThumbSide, put=setStaticF_RightThumbSide)) ::UnityEngine::Vector3  RightThumbSide;

static inline ::UnityEngine::Vector3 getStaticF_LeftDistal() ;

static inline ::UnityEngine::Vector3 getStaticF_LeftDorsal() ;

static inline ::UnityEngine::Vector3 getStaticF_LeftPalmar() ;

static inline ::UnityEngine::Vector3 getStaticF_LeftPinkySide() ;

static inline ::UnityEngine::Vector3 getStaticF_LeftProximal() ;

static inline ::UnityEngine::Vector3 getStaticF_LeftThumbSide() ;

static inline ::UnityEngine::Vector3 getStaticF_RightDistal() ;

static inline ::UnityEngine::Vector3 getStaticF_RightDorsal() ;

static inline ::UnityEngine::Vector3 getStaticF_RightPalmar() ;

static inline ::UnityEngine::Vector3 getStaticF_RightPinkySide() ;

static inline ::UnityEngine::Vector3 getStaticF_RightProximal() ;

static inline ::UnityEngine::Vector3 getStaticF_RightThumbSide() ;

static inline void setStaticF_LeftDistal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_LeftDorsal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_LeftPalmar(::UnityEngine::Vector3  value) ;

static inline void setStaticF_LeftPinkySide(::UnityEngine::Vector3  value) ;

static inline void setStaticF_LeftProximal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_LeftThumbSide(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightDistal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightDorsal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightPalmar(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightPinkySide(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightProximal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RightThumbSide(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief Field NUM_FINGERS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_FINGERS{static_cast<int32_t>(0x5)};

/// @brief Field NUM_HAND_JOINTS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_HAND_JOINTS{static_cast<int32_t>(0x1a)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16432};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Constants) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
