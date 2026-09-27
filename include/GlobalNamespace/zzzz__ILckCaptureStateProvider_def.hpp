#pragma once
// IWYU pragma private; include "GlobalNamespace/ILckCaptureStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckCaptureStateProvider)
namespace Liv::Lck {
struct LckCaptureState;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ILckCaptureStateProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ILckCaptureStateProvider*, "", "ILckCaptureStateProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILckCaptureStateProvider
class CORDL_TYPE ILckCaptureStateProvider {
public:
// Declarations
 __declspec(property(get=get_CurrentCaptureState)) ::Liv::Lck::LckCaptureState  CurrentCaptureState;

/// @brief Method IsPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief Method get_CurrentCaptureState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckCaptureState get_CurrentCaptureState() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCaptureStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCaptureStateProvider(ILckCaptureStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
