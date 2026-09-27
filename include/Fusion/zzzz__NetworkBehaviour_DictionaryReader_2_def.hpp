#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_DictionaryReader_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviour_DictionaryReader_2)
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
template<typename K,typename V>
struct NetworkDictionaryReadOnly_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkBehaviour_DictionaryReader_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviour_DictionaryReader_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviour_DictionaryReader_2, "Fusion", "NetworkBehaviour/DictionaryReader`2");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/DictionaryReader`2<K,V>
struct CORDL_TYPE NetworkBehaviour_DictionaryReader_2 {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> Read(::Fusion::NetworkBehaviourBuffer  first) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_DictionaryReader_2() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "KeyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ValueReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviour_DictionaryReader_2(::Fusion::NetworkBehaviour_PropertyReaderData*  Data, ::Fusion::IElementReaderWriter_1<K>*  KeyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  ValueReaderWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkBehaviour_PropertyReaderData*  Data;

/// @brief Field KeyReaderWriter, offset: 0x8, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<K>*  KeyReaderWriter;

/// @brief Field ValueReaderWriter, offset: 0x10, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<V>*  ValueReaderWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
