#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TypeConverterRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConverterRegistry)
namespace GlobalNamespace {
struct TypeConverterRegistry_ConverterKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
class Delegate;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class TypeConverterRegistry_ConverterKeyComparer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TypeConverterRegistry_ConverterKeyComparer;
}
namespace UnityEngine::UIElements {
struct TypeConverterRegistry;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*);
MARK_VAL_T(::UnityEngine::UIElements::TypeConverterRegistry);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*, "UnityEngine.UIElements", "TypeConverterRegistry/ConverterKeyComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TypeConverterRegistry, "UnityEngine.UIElements", "TypeConverterRegistry");
// [IsReadOnly]
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TypeConverterRegistry
struct CORDL_TYPE TypeConverterRegistry {
public:
// Declarations
using ConverterKey = ::GlobalNamespace::TypeConverterRegistry_ConverterKey;

using ConverterKeyComparer = ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer;

/// @brief Field k_Comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Comparer, put=setStaticF_k_Comparer)) ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*  k_Comparer;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>*() ;

/// @brief Method Apply, addr 0xb718494, size 0x188, virtual false, abstract: false, final false
inline void Apply(::UnityEngine::UIElements::TypeConverterRegistry  registry) ;

/// @brief Method Create, addr 0xb7182bc, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TypeConverterRegistry Create() ;

/// @brief Method Equals, addr 0xb71875c, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::TypeConverterRegistry  x, ::UnityEngine::UIElements::TypeConverterRegistry  y) ;

/// @brief Method GetConverter, addr 0xb71861c, size 0xa8, virtual false, abstract: false, final false
inline ::System::Delegate* GetConverter(::System::Type*  source, ::System::Type*  destination) ;

/// @brief Method GetHashCode, addr 0xb718768, size 0x20, virtual true, abstract: false, final true
inline int32_t GetHashCode(::UnityEngine::UIElements::TypeConverterRegistry  obj) ;

/// @brief Method Register, addr 0xb718378, size 0xec, virtual false, abstract: false, final false
inline void Register(::System::Type*  source, ::System::Type*  destination, ::System::Delegate*  converter) ;

/// @brief Method TryGetConverter, addr 0xb7186c4, size 0x98, virtual false, abstract: false, final false
inline bool TryGetConverter(::System::Type*  source, ::System::Type*  destination, ::by_ref<::System::Delegate*>  converter) ;

/// @brief Method .ctor, addr 0xb718370, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TypeConverterRegistry_ConverterKey,::System::Delegate*>*  storage) ;

static inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* getStaticF_k_Comparer() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::TypeConverterRegistry>* i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__TypeConverterRegistry_() ;

static inline void setStaticF_k_Comparer(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TypeConverterRegistry() ;

// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TypeConverterRegistry_ConverterKey,::System::Delegate*>*", modifiers: "", def_value: None, comment: None }]
constexpr TypeConverterRegistry(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TypeConverterRegistry_ConverterKey,::System::Delegate*>*  m_Converters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Converters, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TypeConverterRegistry_ConverterKey,::System::Delegate*>*  m_Converters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TypeConverterRegistry, m_Converters) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TypeConverterRegistry) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TypeConverterRegistry/ConverterKeyComparer
class CORDL_TYPE TypeConverterRegistry_ConverterKeyComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::TypeConverterRegistry_ConverterKey>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::TypeConverterRegistry_ConverterKey>*() noexcept;

/// @brief Method Equals, addr 0xb71880c, size 0x88, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::TypeConverterRegistry_ConverterKey  x, ::GlobalNamespace::TypeConverterRegistry_ConverterKey  y) ;

/// @brief Method GetHashCode, addr 0xb718894, size 0xb4, virtual true, abstract: false, final true
inline int32_t GetHashCode(::GlobalNamespace::TypeConverterRegistry_ConverterKey  obj) ;

static inline ::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb718804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::TypeConverterRegistry_ConverterKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::TypeConverterRegistry_ConverterKey>* i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__TypeConverterRegistry_ConverterKey_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeConverterRegistry_ConverterKeyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeConverterRegistry_ConverterKeyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeConverterRegistry_ConverterKeyComparer(TypeConverterRegistry_ConverterKeyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeConverterRegistry_ConverterKeyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeConverterRegistry_ConverterKeyComparer(TypeConverterRegistry_ConverterKeyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::TypeConverterRegistry_ConverterKeyComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
