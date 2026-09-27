#pragma once
// IWYU pragma private; include "Photon/Voice/ObjectFactory_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ObjectFactory_2)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::ObjectFactory_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::ObjectFactory_2, "Photon.Voice", "ObjectFactory`2");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename TType,typename TInfo>
// Is value type: false
// CS Name: Photon.Voice.ObjectFactory`2<TType,TInfo>
class CORDL_TYPE ObjectFactory_2 {
public:
// Declarations
 __declspec(property(get=get_Info)) TInfo  Info;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Free(TType  obj) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Free(TType  obj, TInfo  info) ;

/// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TType New() ;

/// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TType New(TInfo  info) ;

/// @brief Method get_Info, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TInfo get_Info() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ObjectFactory_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectFactory_2(ObjectFactory_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
