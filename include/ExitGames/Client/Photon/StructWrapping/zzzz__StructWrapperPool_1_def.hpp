#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StructWrapperPool_1)
namespace ExitGames::Client::Photon::StructWrapping {
template<typename T>
class StructWrapper_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
template<typename T>
class StructWrapperPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPool`1");
// Dependencies ExitGames.Client.Photon.StructWrapping.StructWrapperPool, ExitGames.Client.Photon.StructWrapping.WrappedType
namespace ExitGames::Client::Photon::StructWrapping {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T>
class CORDL_TYPE StructWrapperPool_1 : public ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool {
public:
// Declarations
/// @brief Field isStaticPool, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStaticPool, put=__cordl_internal_set_isStaticPool)) bool  isStaticPool;

/// @brief Field pool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*  pool;

/// @brief Field tType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tType, put=__cordl_internal_set_tType)) ::System::Type*  tType;

/// @brief Field wType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_wType, put=__cordl_internal_set_wType)) ::ExitGames::Client::Photon::StructWrapping::WrappedType  wType;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire() ;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire(T  value) ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* New_ctor(bool  isStaticPool) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Release(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*  obj) ;

constexpr bool const& __cordl_internal_get_isStaticPool() const;

constexpr bool& __cordl_internal_get_isStaticPool() ;

constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>* const& __cordl_internal_get_pool() const;

constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*& __cordl_internal_get_pool() ;

constexpr ::System::Type* const& __cordl_internal_get_tType() const;

constexpr ::System::Type*& __cordl_internal_get_tType() ;

constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& __cordl_internal_get_wType() const;

constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& __cordl_internal_get_wType() ;

constexpr void __cordl_internal_set_isStaticPool(bool  value) ;

constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*  value) ;

constexpr void __cordl_internal_set_tType(::System::Type*  value) ;

constexpr void __cordl_internal_set_wType(::ExitGames::Client::Photon::StructWrapping::WrappedType  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(bool  isStaticPool) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StructWrapperPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StructWrapperPool_1(StructWrapperPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StructWrapperPool_1(StructWrapperPool_1 const& ) = delete;

/// @brief Field GROWBY offset 0xffffffff size 0x4
static constexpr int32_t  GROWBY{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26494};

/// @brief Field tType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___tType;

/// @brief Field wType, offset: 0x18, size: 0x4, def value: None
 ::ExitGames::Client::Photon::StructWrapping::WrappedType  ___wType;

/// @brief Field pool, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*  ___pool;

/// @brief Field isStaticPool, offset: 0x28, size: 0x1, def value: None
 bool  ___isStaticPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ExitGames::Client::Photon::StructWrapping
