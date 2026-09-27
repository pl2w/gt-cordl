#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputButtonReader_BypassScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRInputButtonReader_BypassScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRInputButtonReader_BypassScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInputButtonReader_BypassScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInputButtonReader_BypassScope, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputButtonReader/BypassScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputButtonReader/BypassScope
struct CORDL_TYPE XRInputButtonReader_BypassScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb4c9a78, size 0x18, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb4c92a0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRInputButtonReader_BypassScope() ;

// Ctor Parameters [CppParam { name: "m_Reader", ty: "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*", modifiers: "", def_value: None, comment: None }]
constexpr XRInputButtonReader_BypassScope(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Reader) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Reader, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Reader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInputButtonReader_BypassScope, m_Reader) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInputButtonReader_BypassScope) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
