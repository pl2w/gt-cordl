#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/DVector2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DVector2)
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct DVector2;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::DVector2);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::DVector2, "DigitalOpus.MB.Core", "DVector2");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.DVector2
struct CORDL_TYPE DVector2 {
public:
// Declarations
/// @brief Field epsilon, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_epsilon, put=setStaticF_epsilon)) double_t  epsilon;

/// @brief Method Distance, addr 0x9dbc824, size 0x84, virtual false, abstract: false, final false
static inline double_t Distance(::DigitalOpus::MB::Core::DVector2  a, ::DigitalOpus::MB::Core::DVector2  b) ;

/// @brief Method GetVector2, addr 0x9dbc594, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetVector2() ;

/// @brief Method IsContainedIn, addr 0x9dbc5a4, size 0x40, virtual false, abstract: false, final false
inline bool IsContainedIn(::DigitalOpus::MB::Core::DRect  r) ;

/// @brief Method IsContainedInWithMargin, addr 0x9dbc5e4, size 0x120, virtual false, abstract: false, final false
inline bool IsContainedInWithMargin(::DigitalOpus::MB::Core::DRect  r) ;

/// @brief Method Subtract, addr 0x9dbc578, size 0xc, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DVector2 Subtract(::DigitalOpus::MB::Core::DVector2  a, ::DigitalOpus::MB::Core::DVector2  b) ;

/// @brief Method ToString, addr 0x9dbc704, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x9dbc7a0, size 0x84, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  formatS) ;

/// @brief Method .ctor, addr 0x9dbc58c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::DVector2  r) ;

/// @brief Method .ctor, addr 0x9dbc584, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  xx, double_t  yy) ;

static inline double_t getStaticF_epsilon() ;

static inline void setStaticF_epsilon(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DVector2() ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr DVector2(double_t  x, double_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 double_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 double_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::DVector2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::DVector2, y) == 0x8, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::DVector2) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
