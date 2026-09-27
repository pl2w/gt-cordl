#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputValueReader`1_BypassScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRInputValueReader`1_BypassScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct XRInputValueReader_1_BypassScope;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::XRInputValueReader_1_BypassScope);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::XRInputValueReader_1_BypassScope, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputValueReader`1/BypassScope");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1/BypassScope<TValue>
struct CORDL_TYPE XRInputValueReader_1_BypassScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  reader) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRInputValueReader_1_BypassScope() ;

// Ctor Parameters [CppParam { name: "m_Reader", ty: "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*", modifiers: "", def_value: None, comment: None }]
constexpr XRInputValueReader_1_BypassScope(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  m_Reader) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Reader, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  m_Reader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
