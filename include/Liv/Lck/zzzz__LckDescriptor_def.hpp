#pragma once
// IWYU pragma private; include "Liv/Lck/LckDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckDescriptor)
// Forward declare root types
namespace Liv::Lck {
class LckDescriptor;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckDescriptor*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckDescriptor*, "Liv.Lck", "LckDescriptor");
// Dependencies Liv.Lck.CameraTrackDescriptor, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckDescriptor
class CORDL_TYPE LckDescriptor : public ::System::Object {
public:
// Declarations
/// @brief Field cameraTrackDescriptor, offset 0x10, size 0x14 
 __declspec(property(get=__cordl_internal_get_cameraTrackDescriptor, put=__cordl_internal_set_cameraTrackDescriptor)) ::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor;

static inline ::Liv::Lck::LckDescriptor* New_ctor() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get_cameraTrackDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get_cameraTrackDescriptor() ;

constexpr void __cordl_internal_set_cameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

/// @brief Method .ctor, addr 0x9cf3a6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDescriptor(LckDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDescriptor(LckDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24792};

/// @brief Field cameraTrackDescriptor, offset: 0x10, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ___cameraTrackDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckDescriptor, ___cameraTrackDescriptor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckDescriptor) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
