#pragma once
// IWYU pragma private; include "Fusion/NetworkBufferSerializerInfo.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkBufferSerializer_def.hpp"
// Ctor Parameters [CppParam { name: "Tag", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Serializer", ty: "::Fusion::NetworkBufferSerializer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkBufferSerializerInfo::NetworkBufferSerializerInfo(int32_t  Tag, int32_t  Offset, ::Fusion::NetworkBufferSerializer*  Serializer) noexcept  {
this->Tag = Tag;
this->Offset = Offset;
this->Serializer = Serializer;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBufferSerializerInfo::NetworkBufferSerializerInfo()   {
}
