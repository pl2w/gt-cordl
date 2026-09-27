#pragma once
// IWYU pragma private; include "GlobalNamespace/FrameStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameStamp)
// Forward declare root types
namespace GlobalNamespace {
struct FrameStamp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FrameStamp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrameStamp, "", "FrameStamp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FrameStamp
struct CORDL_TYPE FrameStamp {
public:
// Declarations
 __declspec(property(get=get_framesElapsed)) int32_t  framesElapsed;

/// @brief Method GetHashCode, addr 0x5a1ac2c, size 0x68, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Now, addr 0x5a1aba0, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FrameStamp Now() ;

/// @brief Method ToString, addr 0x5a1aba8, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_framesElapsed, addr 0x5a1ab80, size 0x20, virtual false, abstract: false, final false
inline int32_t get_framesElapsed() ;

/// @brief Method op_Implicit, addr 0x5a1acb0, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FrameStamp op_Implicit___GlobalNamespace__FrameStamp(int32_t  framesElapsed) ;

/// @brief Method op_Implicit, addr 0x5a1ac94, size 0x1c, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::FrameStamp  fs) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameStamp() ;

// Ctor Parameters [CppParam { name: "_lastFrame", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FrameStamp(int32_t  _lastFrame) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2804};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _lastFrame, offset: 0x0, size: 0x4, def value: None
 int32_t  _lastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrameStamp, _lastFrame) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrameStamp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
