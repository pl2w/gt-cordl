#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterAppearance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CritterAppearance)
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct CritterAppearance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CritterAppearance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterAppearance, "", "CritterAppearance");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CritterAppearance
struct CORDL_TYPE CritterAppearance {
public:
// Declarations
/// @brief Method DataLength, addr 0x56f86f0, size 0x8, virtual false, abstract: false, final false
static inline int32_t DataLength() ;

/// @brief Method ReadFromPhotonStream, addr 0x56f88f4, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CritterAppearance ReadFromPhotonStream(::Photon::Pun::PhotonStream*  data) ;

/// @brief Method ReadFromRPCData, addr 0x56f8784, size 0x170, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CritterAppearance ReadFromRPCData(::ArrayW<::System::Object*>  data) ;

/// @brief Method ToString, addr 0x56f89a8, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ValidateData, addr 0x56f86f8, size 0x8c, virtual false, abstract: false, final false
static inline bool ValidateData(::ArrayW<::System::Object*>  data) ;

/// @brief Method WriteToRPCData, addr 0x56f854c, size 0x1a4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> WriteToRPCData() ;

/// @brief Method .ctor, addr 0x56f8524, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  hatName, float_t  size) ;

// Ctor Parameters []
// @brief default ctor
constexpr CritterAppearance() ;

// Ctor Parameters [CppParam { name: "size", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hatName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CritterAppearance(float_t  size, ::StringW  hatName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field size, offset: 0x0, size: 0x4, def value: None
 float_t  size;

/// @brief Field hatName, offset: 0x8, size: 0x8, def value: None
 ::StringW  hatName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterAppearance, size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterAppearance, hatName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterAppearance) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
