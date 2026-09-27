#pragma once
// IWYU pragma private; include "Fusion/NetworkInputUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkInputUtils)
namespace Fusion {
class NetworkInputUtils___c;
}
namespace Fusion {
class NetworkInputWeavedAttribute;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class NetworkInputUtils;
}
namespace Fusion {
class NetworkInputUtils___c;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkInputUtils*);
MARK_REF_T(::Fusion::NetworkInputUtils___c*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkInputUtils*, "Fusion", "NetworkInputUtils");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkInputUtils___c*, "Fusion", "NetworkInputUtils/<>c");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkInputUtils
class CORDL_TYPE NetworkInputUtils : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::NetworkInputUtils___c;

/// @brief Field _initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__initialized, put=setStaticF__initialized)) bool  _initialized;

/// @brief Field _typeKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__typeKey, put=setStaticF__typeKey)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  _typeKey;

/// @brief Field _wordCount, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__wordCount, put=setStaticF__wordCount)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  _wordCount;

/// @brief Method GetMaxWordCount, addr 0x600c05c, size 0x204, virtual false, abstract: false, final false
static inline int32_t GetMaxWordCount() ;

/// @brief Method GetType, addr 0x600b40c, size 0x17c, virtual false, abstract: false, final false
static inline ::System::Type* GetType(int32_t  typeKey) ;

/// @brief Method GetTypeKey, addr 0x600b85c, size 0x124, virtual false, abstract: false, final false
static inline int32_t GetTypeKey(::System::Type*  type) ;

/// @brief Method GetWordCount, addr 0x600b6b8, size 0x124, virtual false, abstract: false, final false
static inline int32_t GetWordCount(::System::Type*  type) ;

/// @brief Method LoadTypes, addr 0x600b980, size 0x6dc, virtual false, abstract: false, final false
static inline void LoadTypes() ;

/// @brief Method ResetStatics, addr 0x600c260, size 0x64, virtual false, abstract: false, final false
static inline void ResetStatics() ;

static inline bool getStaticF__initialized() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF__typeKey() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF__wordCount() ;

static inline void setStaticF__initialized(bool  value) ;

static inline void setStaticF__typeKey(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

static inline void setStaticF__wordCount(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkInputUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkInputUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkInputUtils(NetworkInputUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInputUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkInputUtils(NetworkInputUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkInputUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkInputUtils/<>c
class CORDL_TYPE NetworkInputUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkInputUtils___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*  __9__3_0;

static inline ::Fusion::NetworkInputUtils___c* New_ctor() ;

/// @brief Method <LoadTypes>b__3_0, addr 0x600c334, size 0x118, virtual false, abstract: false, final false
inline int32_t _LoadTypes_b__3_0(::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>  a, ::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>  b) ;

/// @brief Method .ctor, addr 0x600c32c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkInputUtils___c* getStaticF___9() ;

static inline ::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Fusion::NetworkInputUtils___c*  value) ;

static inline void setStaticF___9__3_0(::System::Comparison_1<::System::ValueTuple_2<::System::Type*,::Fusion::NetworkInputWeavedAttribute*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkInputUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkInputUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkInputUtils___c(NetworkInputUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInputUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkInputUtils___c(NetworkInputUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkInputUtils___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
