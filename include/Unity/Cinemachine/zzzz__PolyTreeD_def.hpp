#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyTreeD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__PolyPathD_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PolyTreeD)
// Forward declare root types
namespace Unity::Cinemachine {
class PolyTreeD;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyTreeD*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyTreeD*, "Unity.Cinemachine", "PolyTreeD");
// Dependencies Unity.Cinemachine.PolyPathD
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyTreeD
class CORDL_TYPE PolyTreeD : public ::Unity::Cinemachine::PolyPathD {
public:
// Declarations
 __declspec(property(get=get_Scale)) double_t  Scale;

static inline ::Unity::Cinemachine::PolyTreeD* New_ctor() ;

/// @brief Method .ctor, addr 0xaefbc98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Scale, addr 0xaefbc90, size 0x8, virtual false, abstract: false, final false
inline double_t get_Scale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyTreeD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyTreeD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyTreeD(PolyTreeD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyTreeD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyTreeD(PolyTreeD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::PolyTreeD) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
