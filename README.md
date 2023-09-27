# Automotive Cybersecurity Engineering Handbook

<a href="https://www.packtpub.com/product/automotive-cybersecurity-engineering-handbook/9781801076531?utm_source=github&utm_medium=repository&utm_campaign="><img src="https://content.packt.com/B17055/cover_image_small.jpg" alt="Automotive Cybersecurity Engineering Handbook" height="256px" align="right"></a>

This is the code repository for [Automotive Cybersecurity Engineering Handbook](https://www.packtpub.com/product/automotive-cybersecurity-engineering-handbook/9781801076531?utm_source=github&utm_medium=repository&utm_campaign=9781801076531), published by Packt.

**The automotive engineer's roadmap to cyber-resilient vehicles**

## What is this book about?

This book covers the following exciting features:
* Get to grips with present and future vehicle networking technologies
* Explore basic concepts for securing automotive systems
* Discover diverse approaches to threat modeling of systems
* Conduct efficient threat analysis and risk assessment (TARA) for automotive systems using best practices
* Gain a comprehensive understanding of ISO/SAE 21434's cybersecurity engineering approach
* Implement cybersecurity controls for all vehicle life cycles
* Master ECU-level cybersecurity controls

If you feel this book is for you, get your [copy](https://www.amazon.com/dp/1801076537) today!

<a href="https://www.packtpub.com/?utm_source=github&utm_medium=banner&utm_campaign=GitHubBanner"><img src="https://raw.githubusercontent.com/PacktPublishing/GitHub/master/GitHub.png" 
alt="https://www.packtpub.com/" border="5" /></a>

## Instructions and Navigations
All of the code is organized into folders. For example, Chapter06.

The code will look like the following:
```
If (signatureVerificationResult == 0x3CA5965A)
{
 //hamming distance check passed, now perform a second check using the inverse of the variable
 if(~signatureVerificationResult != 0xC35A69A5)
 {
 Log_fault(error_type);
 }
 else
 {
 Allow_application_to_run(); //attacker wants to get here //through glitching
 }
}
```

**Following is what you need for this book:**
If you're an engineer wondering where to get started in the field of automotive cybersecurity or trying to understand which security standards apply to your product and how, then this is the book for you. This book is also for experienced engineers looking for a practical approach to automotive cybersecurity development that can be achieved within a reasonable time frame while leveraging established safety and quality processes. Familiarity with basic automotive development processes across the V-model will help you make the most of this book.


### Related products
* Network Automation with Go [[Packt]](https://www.packtpub.com/product/network-automation-with-go/9781800560925?utm_source=github&utm_medium=repository&utm_campaign=9781800560925) [[Amazon]](https://www.amazon.com/dp/1800560923)

* Reconnaissance for Ethical Hackers [[Packt]](https://www.packtpub.com/product/reconnaissance-for-ethical-hackers/9781837630639?utm_source=github&utm_medium=repository&utm_campaign=9781837630639) [[Amazon]](https://www.amazon.com/dp/1837630631)


## Get to Know the Author
**Dr. Ahmad MK Nasser**
is an automotive cybersecurity architect with a long experience in securing safety-critical systems. He started his career as a software engineer, building automotive network drivers, diagnostics protocols, and flash programming solutions. This naturally led him into the field of automotive cybersecurity, where he designed secure firmware solutions for various microcontrollers and SoCs, defined secure hardware and software architectures of embedded systems, and performed threat analysis of numerous vehicle architectures, ECUs, and smart sensors. Ahmad holds a B.S. and an M.S. in electrical and computer engineering from Wayne State University, as well as a Ph.D. in computer science from the University of Michigan in Dearborn. He is currently a principal security architect for NVIDIA's autonomous driving software platform.

### Download a free PDF

 <i>If you have already purchased a print or Kindle version of this book, you can get a DRM-free PDF version at no cost.<br>Simply click on the link to claim your free PDF.</i>
<p align="center"> <a href="https://packt.link/free-ebook/9781801076531">https://packt.link/free-ebook/9781801076531 </a> </p>
