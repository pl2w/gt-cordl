#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StructWrapper_1)
namespace ExitGames::Client::Photon::StructWrapping {
struct Pooling;
}
namespace ExitGames::Client::Photon::StructWrapping {
template<typename T>
class StructWrapperPool_1;
}
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
template<typename T>
class StructWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1, "ExitGames.Client.Photon.StructWrapping", "StructWrapper`1");
// Dependencies ExitGames.Client.Photon.StructWrapping.Pooling, ExitGames.Client.Photon.StructWrapping.StructWrapper
namespace ExitGames::Client::Photon::StructWrapping {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ExitGames.Client.Photon.StructWrapping.StructWrapper`1<T>
class CORDL_TYPE StructWrapper_1 : public ::ExitGames::Client::Photon::StructWrapping::StructWrapper {
public:
// Declarations
 __declspec(property(get=get_ReturnPool, put=set_ReturnPool)) ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  ReturnPool;

/// @brief Field <ReturnPool>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReturnPool_k__BackingField, put=__cordl_internal_set__ReturnPool_k__BackingField)) ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  _ReturnPool_k__BackingField;

/// @brief Field pooling, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pooling, put=__cordl_internal_set_pooling)) ::ExitGames::Client::Photon::StructWrapping::Pooling  pooling;

/// @brief Field staticPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticPool, put=setStaticF_staticPool)) ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  staticPool;

/// @brief Field value, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing) ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing, ::System::Type*  tType, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wType) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString(bool  writeTypeInfo) ;

/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Unwrap() ;

constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* const& __cordl_internal_get__ReturnPool_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*& __cordl_internal_get__ReturnPool_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling const& __cordl_internal_get_pooling() const;

constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling& __cordl_internal_get_pooling() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set__ReturnPool_k__BackingField(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value) ;

constexpr void __cordl_internal_set_pooling(::ExitGames::Client::Photon::StructWrapping::Pooling  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing, ::System::Type*  tType, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wType) ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* getStaticF_staticPool() ;

/// [CompilerGenerated]
/// @brief Method get_ReturnPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* get_ReturnPool() ;

static inline void setStaticF_staticPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReturnPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ReturnPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StructWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StructWrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StructWrapper_1(StructWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StructWrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StructWrapper_1(StructWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26492};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ReturnPool>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  ____ReturnPool_k__BackingField;

/// @brief Field pooling, offset: 0x28, size: 0x4, def value: None
 ::ExitGames::Client::Photon::StructWrapping::Pooling  ___pooling;

/// @brief Field value, offset: 0x30, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ExitGames::Client::Photon::StructWrapping
