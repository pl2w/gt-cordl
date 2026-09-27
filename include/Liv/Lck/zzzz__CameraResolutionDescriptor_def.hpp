#pragma once
// IWYU pragma private; include "Liv/Lck/CameraResolutionDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraResolutionDescriptor)
namespace Liv::Lck {
struct LckCameraOrientation;
}
// Forward declare root types
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::CameraResolutionDescriptor);
DEFINE_IL2CPP_CLASS(::Liv::Lck::CameraResolutionDescriptor, "Liv.Lck", "CameraResolutionDescriptor");
// Dependencies 
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.CameraResolutionDescriptor
struct CORDL_TYPE CameraResolutionDescriptor {
public:
// Declarations
/// @brief Method GetResolutionInOrientation, addr 0x9ceba20, size 0xdc, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraResolutionDescriptor GetResolutionInOrientation(::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method IsValid, addr 0x9ceb8c8, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0x9ceba18, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  width, uint32_t  height) ;

// Ctor Parameters []
// @brief default ctor
constexpr CameraResolutionDescriptor() ;

// Ctor Parameters [CppParam { name: "Width", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Height", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraResolutionDescriptor(uint32_t  Width, uint32_t  Height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Width, offset: 0x0, size: 0x4, def value: None
 uint32_t  Width;

/// @brief Field Height, offset: 0x4, size: 0x4, def value: None
 uint32_t  Height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::CameraResolutionDescriptor, Width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::CameraResolutionDescriptor, Height) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::CameraResolutionDescriptor) == 0x8, "Size mismatch!");

} // namespace end def Liv::Lck
