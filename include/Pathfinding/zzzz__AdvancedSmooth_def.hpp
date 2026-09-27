#pragma once
// IWYU pragma private; include "Pathfinding/AdvancedSmooth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedSmooth)
namespace GlobalNamespace {
struct AdvancedSmooth_Turn;
}
namespace Pathfinding {
class AdvancedSmooth_ConstantTurn;
}
namespace Pathfinding {
class AdvancedSmooth_MaxTurn;
}
namespace Pathfinding {
class AdvancedSmooth_TurnConstructor;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class AdvancedSmooth;
}
namespace Pathfinding {
class AdvancedSmooth_ConstantTurn;
}
namespace Pathfinding {
class AdvancedSmooth_MaxTurn;
}
namespace Pathfinding {
class AdvancedSmooth_TurnConstructor;
}
// Write type traits
MARK_REF_T(::Pathfinding::AdvancedSmooth*);
MARK_REF_T(::Pathfinding::AdvancedSmooth_ConstantTurn*);
MARK_REF_T(::Pathfinding::AdvancedSmooth_MaxTurn*);
MARK_REF_T(::Pathfinding::AdvancedSmooth_TurnConstructor*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AdvancedSmooth*, "Pathfinding", "AdvancedSmooth");
DEFINE_IL2CPP_CLASS(::Pathfinding::AdvancedSmooth_ConstantTurn*, "Pathfinding", "AdvancedSmooth/ConstantTurn");
DEFINE_IL2CPP_CLASS(::Pathfinding::AdvancedSmooth_MaxTurn*, "Pathfinding", "AdvancedSmooth/MaxTurn");
DEFINE_IL2CPP_CLASS(::Pathfinding::AdvancedSmooth_TurnConstructor*, "Pathfinding", "AdvancedSmooth/TurnConstructor");
// [AddComponentMenu("Pathfinding/Modifiers/Advanced Smooth")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_advanced_smooth.php")]
// Dependencies Pathfinding.MonoModifier
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AdvancedSmooth
class CORDL_TYPE AdvancedSmooth : public ::Pathfinding::MonoModifier {
public:
// Declarations
using Turn = ::GlobalNamespace::AdvancedSmooth_Turn;

using ConstantTurn = ::Pathfinding::AdvancedSmooth_ConstantTurn;

using MaxTurn = ::Pathfinding::AdvancedSmooth_MaxTurn;

using TurnConstructor = ::Pathfinding::AdvancedSmooth_TurnConstructor;

 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field turnConstruct1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnConstruct1, put=__cordl_internal_set_turnConstruct1)) ::Pathfinding::AdvancedSmooth_MaxTurn*  turnConstruct1;

/// @brief Field turnConstruct2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnConstruct2, put=__cordl_internal_set_turnConstruct2)) ::Pathfinding::AdvancedSmooth_ConstantTurn*  turnConstruct2;

/// @brief Field turningRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_turningRadius, put=__cordl_internal_set_turningRadius)) float_t  turningRadius;

/// @brief Method Apply, addr 0x5e9cf08, size 0x3a4, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

/// @brief Method EvaluatePaths, addr 0x5e9d798, size 0x180, virtual false, abstract: false, final false
inline void EvaluatePaths(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output) ;

static inline ::Pathfinding::AdvancedSmooth* New_ctor() ;

constexpr ::Pathfinding::AdvancedSmooth_MaxTurn* const& __cordl_internal_get_turnConstruct1() const;

constexpr ::Pathfinding::AdvancedSmooth_MaxTurn*& __cordl_internal_get_turnConstruct1() ;

constexpr ::Pathfinding::AdvancedSmooth_ConstantTurn* const& __cordl_internal_get_turnConstruct2() const;

constexpr ::Pathfinding::AdvancedSmooth_ConstantTurn*& __cordl_internal_get_turnConstruct2() ;

constexpr float_t const& __cordl_internal_get_turningRadius() const;

constexpr float_t& __cordl_internal_get_turningRadius() ;

constexpr void __cordl_internal_set_turnConstruct1(::Pathfinding::AdvancedSmooth_MaxTurn*  value) ;

constexpr void __cordl_internal_set_turnConstruct2(::Pathfinding::AdvancedSmooth_ConstantTurn*  value) ;

constexpr void __cordl_internal_set_turningRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x5e9d944, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5e9cf00, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedSmooth() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedSmooth(AdvancedSmooth && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedSmooth(AdvancedSmooth const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21361};

/// @brief Field turningRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___turningRadius;

/// @brief Field turnConstruct1, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::AdvancedSmooth_MaxTurn*  ___turnConstruct1;

/// @brief Field turnConstruct2, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::AdvancedSmooth_ConstantTurn*  ___turnConstruct2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AdvancedSmooth, ___turningRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth, ___turnConstruct1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth, ___turnConstruct2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AdvancedSmooth) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies Pathfinding.AdvancedSmooth::TurnConstructor, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AdvancedSmooth/ConstantTurn
class CORDL_TYPE AdvancedSmooth_ConstantTurn : public ::Pathfinding::AdvancedSmooth_TurnConstructor {
public:
// Declarations
/// @brief Field circleCenter, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_circleCenter, put=__cordl_internal_set_circleCenter)) ::UnityEngine::Vector3  circleCenter;

/// @brief Field clockwise, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_clockwise, put=__cordl_internal_set_clockwise)) bool  clockwise;

/// @brief Field gamma1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamma1, put=__cordl_internal_set_gamma1)) double_t  gamma1;

/// @brief Field gamma2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamma2, put=__cordl_internal_set_gamma2)) double_t  gamma2;

/// @brief Method GetPath, addr 0x5e9ffc4, size 0x388, virtual true, abstract: false, final false
inline void GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output) ;

static inline ::Pathfinding::AdvancedSmooth_ConstantTurn* New_ctor() ;

/// @brief Method Prepare, addr 0x5e9fbd0, size 0x4, virtual true, abstract: false, final false
inline void Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath) ;

/// @brief Method TangentToTangent, addr 0x5e9fbd4, size 0x3f0, virtual true, abstract: false, final false
inline void TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_circleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_circleCenter() ;

constexpr bool const& __cordl_internal_get_clockwise() const;

constexpr bool& __cordl_internal_get_clockwise() ;

constexpr double_t const& __cordl_internal_get_gamma1() const;

constexpr double_t& __cordl_internal_get_gamma1() ;

constexpr double_t const& __cordl_internal_get_gamma2() const;

constexpr double_t& __cordl_internal_get_gamma2() ;

constexpr void __cordl_internal_set_circleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clockwise(bool  value) ;

constexpr void __cordl_internal_set_gamma1(double_t  value) ;

constexpr void __cordl_internal_set_gamma2(double_t  value) ;

/// @brief Method .ctor, addr 0x5e9daa4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedSmooth_ConstantTurn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_ConstantTurn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedSmooth_ConstantTurn(AdvancedSmooth_ConstantTurn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_ConstantTurn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedSmooth_ConstantTurn(AdvancedSmooth_ConstantTurn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21358};

/// @brief Field circleCenter, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___circleCenter;

/// @brief Field gamma1, offset: 0x28, size: 0x8, def value: None
 double_t  ___gamma1;

/// @brief Field gamma2, offset: 0x30, size: 0x8, def value: None
 double_t  ___gamma2;

/// @brief Field clockwise, offset: 0x38, size: 0x1, def value: None
 bool  ___clockwise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AdvancedSmooth_ConstantTurn, ___circleCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_ConstantTurn, ___gamma1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_ConstantTurn, ___gamma2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_ConstantTurn, ___clockwise) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AdvancedSmooth_ConstantTurn) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies Pathfinding.AdvancedSmooth::TurnConstructor, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AdvancedSmooth/MaxTurn
class CORDL_TYPE AdvancedSmooth_MaxTurn : public ::Pathfinding::AdvancedSmooth_TurnConstructor {
public:
// Declarations
/// @brief Field alfaLeftLeft, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_alfaLeftLeft, put=__cordl_internal_set_alfaLeftLeft)) double_t  alfaLeftLeft;

/// @brief Field alfaLeftRight, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_alfaLeftRight, put=__cordl_internal_set_alfaLeftRight)) double_t  alfaLeftRight;

/// @brief Field alfaRightLeft, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_alfaRightLeft, put=__cordl_internal_set_alfaRightLeft)) double_t  alfaRightLeft;

/// @brief Field alfaRightRight, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_alfaRightRight, put=__cordl_internal_set_alfaRightRight)) double_t  alfaRightRight;

/// @brief Field betaLeftLeft, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaLeftLeft, put=__cordl_internal_set_betaLeftLeft)) double_t  betaLeftLeft;

/// @brief Field betaLeftRight, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaLeftRight, put=__cordl_internal_set_betaLeftRight)) double_t  betaLeftRight;

/// @brief Field betaRightLeft, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaRightLeft, put=__cordl_internal_set_betaRightLeft)) double_t  betaRightLeft;

/// @brief Field betaRightRight, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaRightRight, put=__cordl_internal_set_betaRightRight)) double_t  betaRightRight;

/// @brief Field deltaLeftRight, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_deltaLeftRight, put=__cordl_internal_set_deltaLeftRight)) double_t  deltaLeftRight;

/// @brief Field deltaRightLeft, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_deltaRightLeft, put=__cordl_internal_set_deltaRightLeft)) double_t  deltaRightLeft;

/// @brief Field gammaLeft, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_gammaLeft, put=__cordl_internal_set_gammaLeft)) double_t  gammaLeft;

/// @brief Field gammaRight, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_gammaRight, put=__cordl_internal_set_gammaRight)) double_t  gammaRight;

/// @brief Field leftCircleCenter, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftCircleCenter, put=__cordl_internal_set_leftCircleCenter)) ::UnityEngine::Vector3  leftCircleCenter;

/// @brief Field preLeftCircleCenter, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_preLeftCircleCenter, put=__cordl_internal_set_preLeftCircleCenter)) ::UnityEngine::Vector3  preLeftCircleCenter;

/// @brief Field preRightCircleCenter, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_preRightCircleCenter, put=__cordl_internal_set_preRightCircleCenter)) ::UnityEngine::Vector3  preRightCircleCenter;

/// @brief Field preVaLeft, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_preVaLeft, put=__cordl_internal_set_preVaLeft)) double_t  preVaLeft;

/// @brief Field preVaRight, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_preVaRight, put=__cordl_internal_set_preVaRight)) double_t  preVaRight;

/// @brief Field rightCircleCenter, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightCircleCenter, put=__cordl_internal_set_rightCircleCenter)) ::UnityEngine::Vector3  rightCircleCenter;

/// @brief Field vaLeft, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vaLeft, put=__cordl_internal_set_vaLeft)) double_t  vaLeft;

/// @brief Field vaRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_vaRight, put=__cordl_internal_set_vaRight)) double_t  vaRight;

/// @brief Method GetPath, addr 0x5e9f584, size 0x37c, virtual true, abstract: false, final false
inline void GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output) ;

static inline ::Pathfinding::AdvancedSmooth_MaxTurn* New_ctor() ;

/// @brief Method OnTangentUpdate, addr 0x5e9db0c, size 0xe0, virtual true, abstract: false, final false
inline void OnTangentUpdate() ;

/// @brief Method PointToTangent, addr 0x5e9eb44, size 0x5b0, virtual true, abstract: false, final false
inline void PointToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

/// @brief Method Prepare, addr 0x5e9dc50, size 0x10c, virtual true, abstract: false, final false
inline void Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath) ;

/// @brief Method TangentToPoint, addr 0x5e9f0f4, size 0x490, virtual true, abstract: false, final false
inline void TangentToPoint(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

/// @brief Method TangentToTangent, addr 0x5e9dd5c, size 0xcc8, virtual true, abstract: false, final false
inline void TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

constexpr double_t const& __cordl_internal_get_alfaLeftLeft() const;

constexpr double_t& __cordl_internal_get_alfaLeftLeft() ;

constexpr double_t const& __cordl_internal_get_alfaLeftRight() const;

constexpr double_t& __cordl_internal_get_alfaLeftRight() ;

constexpr double_t const& __cordl_internal_get_alfaRightLeft() const;

constexpr double_t& __cordl_internal_get_alfaRightLeft() ;

constexpr double_t const& __cordl_internal_get_alfaRightRight() const;

constexpr double_t& __cordl_internal_get_alfaRightRight() ;

constexpr double_t const& __cordl_internal_get_betaLeftLeft() const;

constexpr double_t& __cordl_internal_get_betaLeftLeft() ;

constexpr double_t const& __cordl_internal_get_betaLeftRight() const;

constexpr double_t& __cordl_internal_get_betaLeftRight() ;

constexpr double_t const& __cordl_internal_get_betaRightLeft() const;

constexpr double_t& __cordl_internal_get_betaRightLeft() ;

constexpr double_t const& __cordl_internal_get_betaRightRight() const;

constexpr double_t& __cordl_internal_get_betaRightRight() ;

constexpr double_t const& __cordl_internal_get_deltaLeftRight() const;

constexpr double_t& __cordl_internal_get_deltaLeftRight() ;

constexpr double_t const& __cordl_internal_get_deltaRightLeft() const;

constexpr double_t& __cordl_internal_get_deltaRightLeft() ;

constexpr double_t const& __cordl_internal_get_gammaLeft() const;

constexpr double_t& __cordl_internal_get_gammaLeft() ;

constexpr double_t const& __cordl_internal_get_gammaRight() const;

constexpr double_t& __cordl_internal_get_gammaRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftCircleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftCircleCenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_preLeftCircleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_preLeftCircleCenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_preRightCircleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_preRightCircleCenter() ;

constexpr double_t const& __cordl_internal_get_preVaLeft() const;

constexpr double_t& __cordl_internal_get_preVaLeft() ;

constexpr double_t const& __cordl_internal_get_preVaRight() const;

constexpr double_t& __cordl_internal_get_preVaRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightCircleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightCircleCenter() ;

constexpr double_t const& __cordl_internal_get_vaLeft() const;

constexpr double_t& __cordl_internal_get_vaLeft() ;

constexpr double_t const& __cordl_internal_get_vaRight() const;

constexpr double_t& __cordl_internal_get_vaRight() ;

constexpr void __cordl_internal_set_alfaLeftLeft(double_t  value) ;

constexpr void __cordl_internal_set_alfaLeftRight(double_t  value) ;

constexpr void __cordl_internal_set_alfaRightLeft(double_t  value) ;

constexpr void __cordl_internal_set_alfaRightRight(double_t  value) ;

constexpr void __cordl_internal_set_betaLeftLeft(double_t  value) ;

constexpr void __cordl_internal_set_betaLeftRight(double_t  value) ;

constexpr void __cordl_internal_set_betaRightLeft(double_t  value) ;

constexpr void __cordl_internal_set_betaRightRight(double_t  value) ;

constexpr void __cordl_internal_set_deltaLeftRight(double_t  value) ;

constexpr void __cordl_internal_set_deltaRightLeft(double_t  value) ;

constexpr void __cordl_internal_set_gammaLeft(double_t  value) ;

constexpr void __cordl_internal_set_gammaRight(double_t  value) ;

constexpr void __cordl_internal_set_leftCircleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preLeftCircleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preRightCircleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preVaLeft(double_t  value) ;

constexpr void __cordl_internal_set_preVaRight(double_t  value) ;

constexpr void __cordl_internal_set_rightCircleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_vaLeft(double_t  value) ;

constexpr void __cordl_internal_set_vaRight(double_t  value) ;

/// @brief Method .ctor, addr 0x5e9d9f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedSmooth_MaxTurn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_MaxTurn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedSmooth_MaxTurn(AdvancedSmooth_MaxTurn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_MaxTurn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedSmooth_MaxTurn(AdvancedSmooth_MaxTurn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21357};

/// @brief Field preRightCircleCenter, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___preRightCircleCenter;

/// @brief Field preLeftCircleCenter, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___preLeftCircleCenter;

/// @brief Field rightCircleCenter, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightCircleCenter;

/// @brief Field leftCircleCenter, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftCircleCenter;

/// @brief Field vaRight, offset: 0x48, size: 0x8, def value: None
 double_t  ___vaRight;

/// @brief Field vaLeft, offset: 0x50, size: 0x8, def value: None
 double_t  ___vaLeft;

/// @brief Field preVaLeft, offset: 0x58, size: 0x8, def value: None
 double_t  ___preVaLeft;

/// @brief Field preVaRight, offset: 0x60, size: 0x8, def value: None
 double_t  ___preVaRight;

/// @brief Field gammaLeft, offset: 0x68, size: 0x8, def value: None
 double_t  ___gammaLeft;

/// @brief Field gammaRight, offset: 0x70, size: 0x8, def value: None
 double_t  ___gammaRight;

/// @brief Field betaRightRight, offset: 0x78, size: 0x8, def value: None
 double_t  ___betaRightRight;

/// @brief Field betaRightLeft, offset: 0x80, size: 0x8, def value: None
 double_t  ___betaRightLeft;

/// @brief Field betaLeftRight, offset: 0x88, size: 0x8, def value: None
 double_t  ___betaLeftRight;

/// @brief Field betaLeftLeft, offset: 0x90, size: 0x8, def value: None
 double_t  ___betaLeftLeft;

/// @brief Field deltaRightLeft, offset: 0x98, size: 0x8, def value: None
 double_t  ___deltaRightLeft;

/// @brief Field deltaLeftRight, offset: 0xa0, size: 0x8, def value: None
 double_t  ___deltaLeftRight;

/// @brief Field alfaRightRight, offset: 0xa8, size: 0x8, def value: None
 double_t  ___alfaRightRight;

/// @brief Field alfaLeftLeft, offset: 0xb0, size: 0x8, def value: None
 double_t  ___alfaLeftLeft;

/// @brief Field alfaRightLeft, offset: 0xb8, size: 0x8, def value: None
 double_t  ___alfaRightLeft;

/// @brief Field alfaLeftRight, offset: 0xc0, size: 0x8, def value: None
 double_t  ___alfaLeftRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___preRightCircleCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___preLeftCircleCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___rightCircleCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___leftCircleCenter) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___vaRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___vaLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___preVaLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___preVaRight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___gammaLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___gammaRight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___betaRightRight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___betaRightLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___betaLeftRight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___betaLeftLeft) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___deltaRightLeft) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___deltaLeftRight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___alfaRightRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___alfaLeftLeft) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___alfaRightLeft) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_MaxTurn, ___alfaLeftRight) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AdvancedSmooth_MaxTurn) == 0xc8, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AdvancedSmooth/TurnConstructor
class CORDL_TYPE AdvancedSmooth_TurnConstructor : public ::System::Object {
public:
// Declarations
/// @brief Field changedPreviousTangent, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_changedPreviousTangent, put=setStaticF_changedPreviousTangent)) bool  changedPreviousTangent;

/// @brief Field constantBias, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_constantBias, put=__cordl_internal_set_constantBias)) float_t  constantBias;

/// @brief Field current, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_current, put=setStaticF_current)) ::UnityEngine::Vector3  current;

/// @brief Field factorBias, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_factorBias, put=__cordl_internal_set_factorBias)) float_t  factorBias;

/// @brief Field next, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_next, put=setStaticF_next)) ::UnityEngine::Vector3  next;

/// @brief Field normal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_normal, put=setStaticF_normal)) ::UnityEngine::Vector3  normal;

/// @brief Field prev, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_prev, put=setStaticF_prev)) ::UnityEngine::Vector3  prev;

/// @brief Field prevNormal, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_prevNormal, put=setStaticF_prevNormal)) ::UnityEngine::Vector3  prevNormal;

/// @brief Field t1, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_t1, put=setStaticF_t1)) ::UnityEngine::Vector3  t1;

/// @brief Field t2, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_t2, put=setStaticF_t2)) ::UnityEngine::Vector3  t2;

/// @brief Field turningRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_turningRadius, put=setStaticF_turningRadius)) float_t  turningRadius;

/// @brief Method AddCircleSegment, addr 0x5e9f900, size 0x2c0, virtual false, abstract: false, final false
inline void AddCircleSegment(double_t  startAngle, double_t  endAngle, bool  clockwise, ::UnityEngine::Vector3  center, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output, float_t  radius) ;

/// @brief Method AngleToVector, addr 0x5e9eab4, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 AngleToVector(double_t  a) ;

/// @brief Method Atan2, addr 0x5e9dbec, size 0x64, virtual false, abstract: false, final false
inline double_t Atan2(::UnityEngine::Vector3  v) ;

/// @brief Method ClampAngle, addr 0x5ea0628, size 0x40, virtual false, abstract: false, final false
inline double_t ClampAngle(double_t  a) ;

/// @brief Method ClockwiseAngle, addr 0x5e9ea24, size 0x44, virtual false, abstract: false, final false
inline double_t ClockwiseAngle(double_t  from, double_t  to) ;

/// @brief Method CounterClockwiseAngle, addr 0x5e9ea68, size 0x44, virtual false, abstract: false, final false
inline double_t CounterClockwiseAngle(double_t  from, double_t  to) ;

/// @brief Method DebugCircle, addr 0x5ea04dc, size 0x14c, virtual false, abstract: false, final false
inline void DebugCircle(::UnityEngine::Vector3  center, double_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method DebugCircleSegment, addr 0x5ea035c, size 0x180, virtual false, abstract: false, final false
inline void DebugCircleSegment(::UnityEngine::Vector3  center, double_t  startAngle, double_t  endAngle, double_t  radius, ::UnityEngine::Color  color) ;

/// @brief Method GetLengthFromAngle, addr 0x5e9eaac, size 0x8, virtual false, abstract: false, final false
inline double_t GetLengthFromAngle(double_t  angle, double_t  radius) ;

/// @brief Method GetPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output) ;

static inline ::Pathfinding::AdvancedSmooth_TurnConstructor* New_ctor() ;

/// @brief Method OnTangentUpdate, addr 0x5ea034c, size 0x4, virtual true, abstract: false, final false
inline void OnTangentUpdate() ;

/// @brief Method PointToTangent, addr 0x5ea0350, size 0x4, virtual true, abstract: false, final false
inline void PointToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

/// @brief Method PostPrepare, addr 0x5e9d740, size 0x58, virtual false, abstract: false, final false
static inline void PostPrepare() ;

/// @brief Method Prepare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath) ;

/// @brief Method Setup, addr 0x5e9d2ac, size 0x494, virtual false, abstract: false, final false
static inline void Setup(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath) ;

/// @brief Method TangentToPoint, addr 0x5ea0354, size 0x4, virtual true, abstract: false, final false
inline void TangentToPoint(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

/// @brief Method TangentToTangent, addr 0x5ea0358, size 0x4, virtual true, abstract: false, final false
inline void TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList) ;

/// @brief Method ToDegrees, addr 0x5ea0668, size 0x10, virtual false, abstract: false, final false
inline double_t ToDegrees(double_t  rad) ;

constexpr float_t const& __cordl_internal_get_constantBias() const;

constexpr float_t& __cordl_internal_get_constantBias() ;

constexpr float_t const& __cordl_internal_get_factorBias() const;

constexpr float_t& __cordl_internal_get_factorBias() ;

constexpr void __cordl_internal_set_constantBias(float_t  value) ;

constexpr void __cordl_internal_set_factorBias(float_t  value) ;

/// @brief Method .ctor, addr 0x5e9fbc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_changedPreviousTangent() ;

static inline ::UnityEngine::Vector3 getStaticF_current() ;

static inline ::UnityEngine::Vector3 getStaticF_next() ;

static inline ::UnityEngine::Vector3 getStaticF_normal() ;

static inline ::UnityEngine::Vector3 getStaticF_prev() ;

static inline ::UnityEngine::Vector3 getStaticF_prevNormal() ;

static inline ::UnityEngine::Vector3 getStaticF_t1() ;

static inline ::UnityEngine::Vector3 getStaticF_t2() ;

static inline float_t getStaticF_turningRadius() ;

static inline void setStaticF_changedPreviousTangent(bool  value) ;

static inline void setStaticF_current(::UnityEngine::Vector3  value) ;

static inline void setStaticF_next(::UnityEngine::Vector3  value) ;

static inline void setStaticF_normal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_prev(::UnityEngine::Vector3  value) ;

static inline void setStaticF_prevNormal(::UnityEngine::Vector3  value) ;

static inline void setStaticF_t1(::UnityEngine::Vector3  value) ;

static inline void setStaticF_t2(::UnityEngine::Vector3  value) ;

static inline void setStaticF_turningRadius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedSmooth_TurnConstructor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_TurnConstructor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedSmooth_TurnConstructor(AdvancedSmooth_TurnConstructor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedSmooth_TurnConstructor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedSmooth_TurnConstructor(AdvancedSmooth_TurnConstructor const& ) = delete;

/// @brief Field ThreeSixtyRadians offset 0xffffffff size 0x8
static constexpr double_t  ThreeSixtyRadians{static_cast<double_t>(6.283185307179586)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21359};

/// @brief Field constantBias, offset: 0x10, size: 0x4, def value: None
 float_t  ___constantBias;

/// @brief Field factorBias, offset: 0x14, size: 0x4, def value: None
 float_t  ___factorBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AdvancedSmooth_TurnConstructor, ___constantBias) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AdvancedSmooth_TurnConstructor, ___factorBias) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AdvancedSmooth_TurnConstructor) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
