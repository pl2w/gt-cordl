#pragma once
// IWYU pragma private; include "Photon/Voice/ObjectPool_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_2)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectPool_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::ObjectPool_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::ObjectPool_2, "Photon.Voice", "ObjectPool`2");
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename TType,typename TInfo>
// Is value type: false
// CS Name: Photon.Voice.ObjectPool`2<TType,TInfo>
class CORDL_TYPE ObjectPool_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Info)) TInfo  Info;

 __declspec(property(get=get_LogPrefix)) ::StringW  LogPrefix;

/// @brief Field capacity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_capacity, put=__cordl_internal_set_capacity)) int32_t  capacity;

/// @brief Field freeObj, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_freeObj, put=__cordl_internal_set_freeObj)) ::ArrayW<TType>  freeObj;

/// @brief Field info, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) TInfo  info;

/// @brief Field inited, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_inited, put=__cordl_internal_set_inited)) bool  inited;

/// @brief Field name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field pos, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) int32_t  pos;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AcquireOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TType AcquireOrCreate() ;

/// @brief Method AcquireOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TType AcquireOrCreate(TInfo  info) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(TInfo  info) ;

static inline ::Photon::Voice::ObjectPool_2<TType,TInfo>* New_ctor(int32_t  capacity, ::StringW  name) ;

static inline ::Photon::Voice::ObjectPool_2<TType,TInfo>* New_ctor(int32_t  capacity, ::StringW  name, TInfo  info) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Release(TType  obj) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Release(TType  obj, TInfo  objInfo) ;

constexpr int32_t const& __cordl_internal_get_capacity() const;

constexpr int32_t& __cordl_internal_get_capacity() ;

constexpr ::ArrayW<TType> const& __cordl_internal_get_freeObj() const;

constexpr ::ArrayW<TType>& __cordl_internal_get_freeObj() ;

constexpr TInfo const& __cordl_internal_get_info() const;

constexpr TInfo& __cordl_internal_get_info() ;

constexpr bool const& __cordl_internal_get_inited() const;

constexpr bool& __cordl_internal_get_inited() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_pos() const;

constexpr int32_t& __cordl_internal_get_pos() ;

constexpr void __cordl_internal_set_capacity(int32_t  value) ;

constexpr void __cordl_internal_set_freeObj(::ArrayW<TType>  value) ;

constexpr void __cordl_internal_set_info(TInfo  value) ;

constexpr void __cordl_internal_set_inited(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_pos(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::StringW  name) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::StringW  name, TInfo  info) ;

/// @brief Method createObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TType createObject(TInfo  info) ;

/// @brief Method destroyObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void destroyObject(TType  obj) ;

/// @brief Method get_Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInfo get_Info() ;

/// @brief Method get_LogPrefix, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_LogPrefix() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method infosMatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool infosMatch(TInfo  i0, TInfo  i1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_2(ObjectPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_2(ObjectPool_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28413};

/// @brief Field capacity, offset: 0x10, size: 0x4, def value: None
 int32_t  ___capacity;

/// @brief Field info, offset: 0x18, size: 0x8, def value: None
 TInfo  ___info;

/// @brief Field freeObj, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<TType>  ___freeObj;

/// @brief Field pos, offset: 0x28, size: 0x4, def value: None
 int32_t  ___pos;

/// @brief Field name, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field inited, offset: 0x38, size: 0x1, def value: None
 bool  ___inited;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
