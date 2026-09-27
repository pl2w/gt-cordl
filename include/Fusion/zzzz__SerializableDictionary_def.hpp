#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableDictionary)
namespace Fusion {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
// Forward declare root types
namespace Fusion {
class SerializableDictionary;
}
// Write type traits
MARK_REF_T(::Fusion::SerializableDictionary*);
DEFINE_IL2CPP_CLASS(::Fusion::SerializableDictionary*, "Fusion", "SerializableDictionary");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SerializableDictionary
class CORDL_TYPE SerializableDictionary : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline ::Fusion::SerializableDictionary_2<TKey,TValue>* Create() ;

static inline ::Fusion::SerializableDictionary* New_ctor() ;

/// @brief Method .ctor, addr 0x5fa4958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableDictionary(SerializableDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableDictionary(SerializableDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SerializableDictionary) == 0x10, "Size mismatch!");

} // namespace end def Fusion
