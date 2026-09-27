#pragma once
// IWYU pragma private; include "Liv/Lck/ILckMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckMonitor)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class ILckMonitor;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckMonitor*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckMonitor*, "Liv.Lck", "ILckMonitor");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckMonitor
class CORDL_TYPE ILckMonitor {
public:
// Declarations
 __declspec(property(get=get_MonitorId)) ::StringW  MonitorId;

/// @brief Method SetRenderTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method get_MonitorId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_MonitorId() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckMonitor(ILckMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
