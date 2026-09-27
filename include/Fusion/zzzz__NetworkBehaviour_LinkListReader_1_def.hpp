#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_LinkListReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviour_LinkListReader_1)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace Fusion {
class NetworkBehaviour_PropertyReaderData;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedListReadOnly_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_LinkListReader_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviour_LinkListReader_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviour_LinkListReader_1, "Fusion", "NetworkBehaviour/LinkListReader`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/LinkListReader`1<T>
struct CORDL_TYPE NetworkBehaviour_LinkListReader_1 {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedListReadOnly_1<T> Read(::Fusion::NetworkBehaviourBuffer  first) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_LinkListReader_1() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReaderWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviour_LinkListReader_1(::Fusion::NetworkBehaviour_PropertyReaderData*  Data, ::Fusion::IElementReaderWriter_1<T>*  ReaderWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkBehaviour_PropertyReaderData*  Data;

/// @brief Field ReaderWriter, offset: 0x8, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<T>*  ReaderWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
