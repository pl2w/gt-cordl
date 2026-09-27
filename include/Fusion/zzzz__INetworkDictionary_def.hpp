#pragma once
// IWYU pragma private; include "Fusion/INetworkDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkDictionary)
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class INetworkDictionary;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkDictionary*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkDictionary*, "Fusion", "INetworkDictionary");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkDictionary
class CORDL_TYPE INetworkDictionary {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Add(::System::Object*  item) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INetworkDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkDictionary(INetworkDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
