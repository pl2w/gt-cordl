#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityValueSurrogate_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnitySurrogateBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityValueSurrogate_2)
namespace Fusion::Internal {
class IUnitySurrogate;
}
namespace Fusion::Internal {
template<typename T>
class IUnityValueSurrogate_1;
}
// Forward declare root types
namespace Fusion::Internal {
template<typename T,typename TReaderWriter>
class UnityValueSurrogate_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Internal::UnityValueSurrogate_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Internal::UnityValueSurrogate_2, "Fusion.Internal", "UnityValueSurrogate`2");
// Dependencies Fusion.Internal.UnitySurrogateBase
namespace Fusion::Internal {
// cpp template
template<typename T,typename TReaderWriter>
// Is value type: false
// CS Name: Fusion.Internal.UnityValueSurrogate`2<T,TReaderWriter>
class CORDL_TYPE UnityValueSurrogate_2 : public ::Fusion::Internal::UnitySurrogateBase {
public:
// Declarations
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) T  DataProperty;

/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
constexpr operator  ::Fusion::Internal::IUnitySurrogate*() noexcept;

/// @brief Convert operator to "::Fusion::Internal::IUnityValueSurrogate_1<T>"
constexpr operator  ::Fusion::Internal::IUnityValueSurrogate_1<T>*() noexcept;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(int32_t  capacity) ;

static inline ::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>* New_ctor() ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_DataProperty() ;

/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
constexpr ::Fusion::Internal::IUnitySurrogate* i___Fusion__Internal__IUnitySurrogate() noexcept;

/// @brief Convert to "::Fusion::Internal::IUnityValueSurrogate_1<T>"
constexpr ::Fusion::Internal::IUnityValueSurrogate_1<T>* i___Fusion__Internal__IUnityValueSurrogate_1_T_() noexcept;

/// @brief Method set_DataProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DataProperty(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate_2(UnityValueSurrogate_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate_2(UnityValueSurrogate_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
