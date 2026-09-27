#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ISplineReferencer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISplineReferencer)
namespace Unity::Cinemachine {
struct SplineSettings;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ISplineReferencer;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ISplineReferencer*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ISplineReferencer*, "Unity.Cinemachine", "ISplineReferencer");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ISplineReferencer
class CORDL_TYPE ISplineReferencer {
public:
// Declarations
 __declspec(property(get=get_SplineSettings)) ::Unity::Cinemachine::SplineSettings  SplineSettings;

/// @brief Method get_SplineSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::by_ref<::Unity::Cinemachine::SplineSettings> get_SplineSettings() ;

// Ctor Parameters [CppParam { name: "", ty: "ISplineReferencer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISplineReferencer(ISplineReferencer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
