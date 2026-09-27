#pragma once
// IWYU pragma private; include "Photon/Voice/FactoryReusableArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryReusableArray_1)
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class FactoryReusableArray_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::FactoryReusableArray_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::FactoryReusableArray_1, "Photon.Voice", "FactoryReusableArray`1");
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.FactoryReusableArray`1<T>
class CORDL_TYPE FactoryReusableArray_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Info)) int32_t  Info;

/// @brief Field arr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_arr, put=__cordl_internal_set_arr)) ::ArrayW<T>  arr;

/// @brief Convert operator to "::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>"
constexpr operator  ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Free(::ArrayW<T>  obj) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Free(::ArrayW<T>  obj, int32_t  info) ;

/// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> New() ;

/// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> New(int32_t  size) ;

static inline ::Photon::Voice::FactoryReusableArray_1<T>* New_ctor(int32_t  size) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_arr() const;

constexpr ::ArrayW<T>& __cordl_internal_get_arr() ;

constexpr void __cordl_internal_set_arr(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Info, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Info() ;

/// @brief Convert to "::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>"
constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>* i___Photon__Voice__ObjectFactory_2___ArrayW_T__int32_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FactoryReusableArray_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FactoryReusableArray_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryReusableArray_1(FactoryReusableArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryReusableArray_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryReusableArray_1(FactoryReusableArray_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28411};

/// @brief Field arr, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___arr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
