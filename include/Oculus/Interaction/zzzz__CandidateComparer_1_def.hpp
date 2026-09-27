#pragma once
// IWYU pragma private; include "Oculus/Interaction/CandidateComparer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CandidateComparer_1)
namespace Oculus::Interaction {
class ICandidateComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename T>
class CandidateComparer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::CandidateComparer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::CandidateComparer_1, "Oculus.Interaction", "CandidateComparer`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.CandidateComparer`1<T>
class CORDL_TYPE CandidateComparer_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::ICandidateComparer"
constexpr operator  ::Oculus::Interaction::ICandidateComparer*() noexcept;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Compare(::System::Object*  a, ::System::Object*  b) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Compare(T  a, T  b) ;

static inline ::Oculus::Interaction::CandidateComparer_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ICandidateComparer"
constexpr ::Oculus::Interaction::ICandidateComparer* i___Oculus__Interaction__ICandidateComparer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CandidateComparer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CandidateComparer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CandidateComparer_1(CandidateComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CandidateComparer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CandidateComparer_1(CandidateComparer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15747};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
