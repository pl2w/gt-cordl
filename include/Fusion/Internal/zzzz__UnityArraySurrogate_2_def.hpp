#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityArraySurrogate_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnitySurrogateBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityArraySurrogate_2)
// Forward declare root types
namespace Fusion::Internal {
template<typename T,typename ReaderWriter>
class UnityArraySurrogate_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Internal::UnityArraySurrogate_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Internal::UnityArraySurrogate_2, "Fusion.Internal", "UnityArraySurrogate`2");
// Dependencies Fusion.Internal.UnitySurrogateBase
namespace Fusion::Internal {
// cpp template
template<typename T,typename ReaderWriter>
// Is value type: false
// CS Name: Fusion.Internal.UnityArraySurrogate`2<T,ReaderWriter>
class CORDL_TYPE UnityArraySurrogate_2 : public ::Fusion::Internal::UnitySurrogateBase {
public:
// Declarations
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<T>  DataProperty;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(int32_t  capacity) ;

static inline ::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<T> get_DataProperty() ;

/// @brief Method set_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DataProperty(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate_2(UnityArraySurrogate_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate_2(UnityArraySurrogate_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
