#pragma once
// IWYU pragma private; include "Liv/Lck/Core/ILckTelemetryContextProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckTelemetryContextProvider)
namespace Liv::Lck::Core {
struct LckTelemetryContextType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core {
class ILckTelemetryContextProvider;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::ILckTelemetryContextProvider*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::ILckTelemetryContextProvider*, "Liv.Lck.Core", "ILckTelemetryContextProvider");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.ILckTelemetryContextProvider
class CORDL_TYPE ILckTelemetryContextProvider {
public:
// Declarations
/// @brief Method ClearTelemetryContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType) ;

/// @brief Method SetTelemetryContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckTelemetryContextProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckTelemetryContextProvider(ILckTelemetryContextProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Core
